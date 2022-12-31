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
    if (Names.compare("end") == 0)
        exit(0);
    for (size_t i = 0; i < Names.length(); i++)
    {
        // MISSING if FILTER: TOLOWER DAS/DOS/DA/DO/DE 

        if(islower(Names[0]))
        {
            Names[0] = toupper(Names[0]);
            ToF = true;
        }
        if ((Names[i] == ' ' || Names[i] == '\t') && (islower(Names[i+1])))
        {
            i++;
            Names[i] = toupper(Names[i]);
            ToF = true;
        }
        else if ((Names[i] == ' ' || Names[i] == '\t') && (isupper(Names[i+1])))
        {
            i++;
            continue;
        }
        else if(isupper(Names[i]))
        {
            Names[i] = tolower(Names[i]);
            ToF = true;
        }
    }
        cout << Names;

    return ToF;
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