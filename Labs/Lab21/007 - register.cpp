#include <iostream>
using std::cout, std::cin, std::endl;

enum Category {CHILDREN = 1,JUVENILE,TEENAGER,ADULT,SENIOR};

struct Swimmer
{
    char Name[40];
    unsigned short Age;
    Category Group{};
};

int main()
{
    Swimmer BRTeam[10];
    char Answer;
    size_t counter{};
    cout << "Registering players\nEnter any letter to continue ";
    cin >> Answer;
    for (size_t i = 0; i < 10; i++)
    {
        cout << "NAME: ";
        cin.get();
        cin.getline(BRTeam[i].Name, 40);
        cout << "AGE: ";
        cin >> BRTeam[i].Age;
        if (BRTeam[i].Age < 5)
        {
            cout << "Members that young are not allowed";
            return 0;
        }
        else if (BRTeam[i].Age >= 5 && BRTeam[i].Age <= 7)
        BRTeam[i].Group = CHILDREN;
        else if (BRTeam[i].Age >= 8 && BRTeam[i].Age <= 10)
        BRTeam[i].Group = JUVENILE;
        else if (BRTeam[i].Age >= 11 && BRTeam[i].Age <= 15)
        BRTeam[i].Group = TEENAGER;
        else if (BRTeam[i].Age >= 16 && BRTeam[i].Age <= 30)
        BRTeam[i].Group = ADULT;
        else
        BRTeam[i].Group = SENIOR;
        counter++;
        cout << "Do you want to continue? (Y/N) ";
        cin >> Answer;
        if (Answer == 'n' || Answer == 'N')
        break;
    }
    //
    cout << "Registered members\n";
    for (size_t i = 0; i < counter; i++)
        cout << BRTeam[i].Name << " " << BRTeam[i].Age << " " << BRTeam[i].Group << endl;
    return 0;
}