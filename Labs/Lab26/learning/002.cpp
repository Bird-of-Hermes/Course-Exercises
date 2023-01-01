#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool InfoCaptureAndFormat(string);
void Displaying(string);

int main()
{
    string StudentsName;
    Displaying(StudentsName);
}

bool InfoCaptureAndFormat(string Names)
{
    bool ToF = false; // true or false used to check Displaying() if inscruction
    cout << "\nName: ";
    getline(cin, Names);
    if (Names.compare("end") == 0) // ends if user enters "end"
        exit(0);
    for (size_t i = 0; i < Names.length(); i++)
    {
        // FILTER: DOESN'T UPPERCASE DAS/DOS/DA/DO/DE/etc
        if((Names[i] == ' ' && isalpha(Names[i+1]) && isalpha(Names[i+2]) && Names[i+3] == ' ')
         || (Names[i] == ' ' && isalpha(Names[i+1]) && isalpha(Names[i+2]) && isalpha(Names[i+3]) && Names[i+4] == ' '))
            continue;
        // always uppercases the first letter of the first name
        if(islower(Names[0]))
        {
            Names[0] = toupper(Names[0]);
            ToF = true;
        }
        // checks if the first letter after a space is lowercase, then uppercases it  
        else if ((Names[i] == ' ' || Names[i] == '\t') && (islower(Names[i+1])))
        {
            i++;
            Names[i] = toupper(Names[i]);
            ToF = true;
        }
        // checks if the first letter after a space is uppercase, then skips it
        else if ((Names[i] == ' ' || Names[i] == '\t') && (isupper(Names[i+1])))
        {
            i++; // skip part, otherwise the next check will always go true and will lowercase everything
            continue;
        }
        else if(isupper(Names[i])) // turns every letter that is upper that doesn't fit above into lower
        {
            Names[i] = tolower(Names[i]);
            ToF = true;
        }
    }
        cout << Names;

    return ToF; // returns true if any letter was fixed
}

void Displaying (string Students)
{
    while(true)
    {
    if (InfoCaptureAndFormat(Students))
        cout << "\t<--- \033[31mFixed\033[0m";
    else
        cout << "\t<--- \033[32mOk\033[0m";
    }
}