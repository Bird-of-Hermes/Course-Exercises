#include <fstream>
#include <iostream>
#include <cstring>
#include <cctype>
using std::cout, std::cin, std::endl;

void IsPalindrome(std::ifstream&);

int main()
{
    std::ifstream fin;
    char FileName[20];
    cout << "File Name: ";
    cin >> FileName;
    fin.open(FileName);
    if(!fin.is_open())
    {
        std::cout << "Couldn't open the file. IFSTREAM Error";
        exit(EXIT_FAILURE);
    }
    IsPalindrome(fin);
    fin.close();
    return 0;
}

void IsPalindrome(std::ifstream& fin)
{
    char IBuffer[20], Buffer[20];
    size_t Counter = 0;
    while(fin >> Buffer)
    {
        strcpy(IBuffer, Buffer); // resets IBuffer everytime a new loop occurs
        size_t Lenght = strlen(Buffer);
        
        for (size_t i = 0, j = Lenght - 1; i < Lenght; i++, j--) 
        {   
            Buffer[j] = tolower(Buffer[j]);
            IBuffer[i] = (Buffer[j]);
        }
        if (strcmp(IBuffer, Buffer) == 0)
        {
            Counter++;
            cout << IBuffer << endl;
        }
    }
    cout << "Occurrences: " << Counter;
}