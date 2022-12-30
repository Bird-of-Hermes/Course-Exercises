#include <fstream>
#include <iostream>
#include <cstring>

#define defaultC "\033[m"

using namespace std;

struct Data
{
    char UserText[80];
    char TColorCode[3]; // could use just 1 byte for these two, but would have to keep casting (int)
    char BColorCode[3];
};

char Menu();

int main()
{
    Data Input;
    ofstream WInput;
    ifstream RInput;
    switch(Menu())
    {
        case 83:
        case 115:
            WInput.open("textfile.bin", ios_base::binary | ios_base::out);
            if(!WInput.is_open())
                {
                    cerr << "Error opening file. Leaving program (OFSTREAM ERROR)";
                    exit(1);
                }
            cout << "Your message: "; 
            cin.getline(Input.UserText, 80); 
            cout << "Text color: ";
            cin >> Input.TColorCode;
            cout << "Background color: ";
            cin >> Input.BColorCode;
            WInput.write((char*)&Input, sizeof(Input));
            cout << "\nYour colored text was stored";
            WInput.close(); 
            break;
        case 68:
        case 100:
            RInput.open("textfile.bin", ios_base::binary | ios_base::in);
            if(!RInput.is_open())
            {
                cerr << "Error opening file. Leaving program (IFSTREAM ERROR)";
                exit(1);
            }
            else  
            { // [38;5;13003848;5;038m
              // "\033[38;5;130;48;5;038m"
                RInput.read((char*)&Input.UserText, sizeof(Input.UserText));
                RInput.read((char*)&Input.TColorCode, sizeof(Input.TColorCode));
                RInput.read((char*)&Input.BColorCode, sizeof(Input.BColorCode));
                char Everything[32]{"\033[38;5;"};
                strcat(Everything, Input.TColorCode);
                strcat(Everything, ";48;5;");
                strcat(Everything, Input.BColorCode);
                strcat(Everything, "m");
                cout << Everything << Input.UserText << defaultC;
                RInput.close();
            }
            break;
        case 76:
        case 108:cout << "Leaving . . ."; break;
        default: cerr << "No recognizable answer was found. Terminating program."; exit(EXIT_FAILURE);
    }
    return 0;
}

char Menu()
{
    char A;
    cout << "\nColored Messages\n----------------\n[S]tore\n[D]isplay\n[L]eave\n----------------\n"
         << "Option: [ ]\b\b";
    cin >> A;
    cin.clear();
    cin.ignore();
    return A;
}