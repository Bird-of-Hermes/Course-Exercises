#include <fstream>
#include <iostream>
using std::cin, std::cout, std::ifstream, std::ofstream, std::ios_base;

union Password
{
    char Alphanumeric[17];
    uint32_t Numeric;
};

char QuoteUser();
void StoreNewPassword();
void DisplayStoredPassword();

int main()
{
    switch(QuoteUser())
    {
    case 'D':
    case 'd': DisplayStoredPassword(); break;
    case 'R':
    case 'r': StoreNewPassword(); break;
    default: cout << "Invalid answer, terminating program";
    }
}

char QuoteUser()
{
    char Answer;
    cout << "Do you want to show the stored password or store a new one? (R to register a new password, D to display the stored password)\n";
    cin >> Answer;
    return Answer;
}

void StoreNewPassword()
{
    char Pwt, AlphaData{'1'}, NumericData{'2'};
    cout << "What type of password do you want create? (A for alphanumeric, N for numeric): ";
    cin >> Pwt;
    Password Pw;
    ofstream WW;
    WW.open("passwords.bin", ios_base::out | ios_base::binary);
    switch(Pwt)
    {
        case 'A':
        case 'a':
        cout << "Enter password: ";
        cin >> Pw.Alphanumeric; 
        WW.write((char*)&AlphaData, sizeof(char));
        WW.write((char*)&Pw.Alphanumeric, sizeof(Pw.Alphanumeric)); break;
        case 'N':
        case 'n': 
        cout << "Enter password: ";
        cin >> Pw.Numeric;
        WW.write((char*)&NumericData, sizeof(char));
        WW.write((char*)&Pw.Numeric, sizeof(Pw.Alphanumeric)); break;
        default: std::cerr << "Invalid answer, terminating program"; WW.close(); exit(1);
    }
    cout << "Password stored successfully!\n";
    WW.close();
}

void DisplayStoredPassword()
{
    Password Alpha;
    char ch = {};
    ifstream RR;
    RR.open("passwords.bin", ios_base::in | ios_base::binary);
    if(!RR.is_open())
    {
        std::cerr << "There's no file";
        system("pause");
        exit(EXIT_FAILURE);
    }
    RR.read((char*)&ch, sizeof(char));
    
    if (ch == '2')
    {
        RR.read((char*)&Alpha.Numeric, sizeof(Alpha.Numeric));
        cout << Alpha.Numeric << std::endl;
    }
    else
    {
        RR.read((char*)&Alpha.Alphanumeric, sizeof(Alpha.Alphanumeric));
        cout << Alpha.Alphanumeric << std::endl;
    }
    RR.close();
}