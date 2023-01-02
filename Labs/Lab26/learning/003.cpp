#include <iostream>
#include <cstring>
using namespace std;

void FirstNameF (const char [], char []);
void LastNameF (const char[], char []);
void Result (const char[], const char[]);

int main()
{
    char FullName[80], FirstName[20], LastName[20];
    while(true)
    {
        cout << "\nName: ";
        cin.getline(FullName, 80);
        if (FullName[0] == '.')
            exit(0);

        FirstNameF(FullName, FirstName);
        LastNameF(FullName, LastName);
        Result(FirstName, LastName);
    }
    return 0;
}

void FirstNameF (const char FullName[], char First[])
{
    size_t j = 0;
    for (size_t i = 0; FullName[i] != ' '; i++)
    {
        First[i] = FullName[i];
        j = i;
    }
    First[++j] = '\0';
}

void LastNameF (const char FullName[], char Last[])
{
    int i = strlen(FullName);

    for (; FullName[i] != ' '; i--)
        continue;

    i++;
    int z = 0;

    for (; FullName[i]; i++, z++)
        Last[z] = FullName[i];
    
    Last[z] = '\0';
}

void Result (const char First[], const char Last[])
{
    char Result [50];
    strcpy (Result, Last);
    strcat (Result, ", ");
    strcat (Result, First);
    cout << Result;
}