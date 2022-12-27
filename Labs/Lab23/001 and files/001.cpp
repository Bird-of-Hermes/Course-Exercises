#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char FileName[20], FileNameE[20];
    cout << "Enter the file name to edit: ";
    cin >> FileName;
    char Suffix[7] = {"_M.cpp"};
    strcpy(FileNameE, FileName); // copies the name of the file the user entered to another variable
    strcat(FileNameE, Suffix); // creates the final name to be used in fout below
    strcat(FileName, ".cpp"); // allows fin to open the file without the user tell if it's a .cpp file
    ifstream fin;
    fin.open(FileName);
    if(!fin.is_open())
    {
        cout << "Failed to open file. Error (IFSTREAM)";
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open(FileNameE);
    if(!fout.is_open())
    {
        cout << "Failed to open file. Error (OFSTREAM)";
        exit(EXIT_FAILURE);
    }
    fout << "// " << FileNameE << endl;
    fout << "#define print cout" << endl;
    char Buffer[70];
    char WORDS[25];
    fin.getline(Buffer, 70);
    while(!fin.eof())
    {
        for (size_t i = 0; i < 70; i++)
        {
            if (Buffer[i] == 'c' && Buffer[i+1] == 'o' && Buffer[i+2] == 'u' && Buffer[i+3] == 't')
            {
                for (int j = 69; j >= i+5; j--)
                    Buffer[j] = Buffer[j-1];
                    
                Buffer[i] = 'p';
                Buffer[i+1] = 'r';
                Buffer[i+2] = 'i';
                Buffer[i+3] = 'n';
                Buffer[i+4] = 't';
                break;
            }
        }
        
        fout << Buffer << endl;
        fin.getline(Buffer,70);
    }
    fout << "}";
    fout.close();
    fin.close();
    return 0;
}