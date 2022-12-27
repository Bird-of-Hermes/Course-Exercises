#include <iostream>
#include <fstream>

using namespace std;

struct StudentsData
{
    char Name[2][20];
    char Code[2]{};
};

int main()
{
    ifstream fin;
    fin.open("003file.txt");
    if(!fin.is_open())
    {
        cout << "Error, couldn't open file. IFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }

    StudentsData Students[12];
    for (size_t i = 0; i < 12; i++)
    {
        fin >> Students[i].Name[0];
        fin >> Students[i].Name[1];
        fin >> Students[i].Code;
    }

    cout << "\nMorning 6th grade" << endl << "---------------------" << endl;
    for (size_t i = 0; i < 12; i++)
        if (Students[i].Code[0] == 'M' && Students[i].Code[1] == '6')
        {
            cout << Students[i].Name[0] << " "
                 << Students[i].Name[1] << endl;
        }
    
    cout << "\nMorning 7th grade" << endl << "---------------------" << endl;
    for (size_t i = 0; i < 12; i++)
        if (Students[i].Code[0] == 'M' && Students[i].Code[1] == '7') 
        {
            cout << Students[i].Name[0] << " "
                 << Students[i].Name[1] << endl;
        }
    
    cout << "\nMorning 8th grade" << endl << "---------------------" << endl;
    for (size_t i = 0; i < 12; i++)
        if (Students[i].Code[0] == 'M' && Students[i].Code[1] == '8')
        {
            cout << Students[i].Name[0] << " "
                 << Students[i].Name[1] << endl;
        }
    
    cout << "\nEvening 6th grade" << endl << "---------------------" << endl;
    for (size_t i = 0; i < 12; i++)
        if (Students[i].Code[0] == 'T' && Students[i].Code[1] == '6')
        {
            cout << Students[i].Name[0] << " "
                 << Students[i].Name[1] << endl;
        }
    
    cout << "\nEvening 7th grade" << endl << "---------------------" << endl;
    for (size_t i = 0; i < 12; i++)
        if (Students[i].Code[0] == 'T' && Students[i].Code[1] == '7')
        {
            cout << Students[i].Name[0] << " "
                 << Students[i].Name[1] << endl;
        }
    
    cout << "\nEvening 8th grade" << endl << "---------------------" << endl;
    for (size_t i = 0; i < 12; i++)
        if (Students[i].Code[0] == 'T' && Students[i].Code[1] == '8')
        {
            cout << Students[i].Name[0] << " "
                 << Students[i].Name[1] << endl;
        }
    fin.close();
    return 0;
}
    