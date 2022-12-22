#include <iostream>
using namespace std;

enum {a=1,b,c,d,e};

struct REG 
{
    char Name[50]; // nome do funcionário
    char Rank[50]; // cargo que ocupa na empresa
    char Nickname[50]; // apelido do funcionário
    int Pref; // 0 = nome, 1 = cargo, 2 = apelido
};

void Menu();

int main()
{
    REG Company[2]{{"John","Cashier","Lion of Coins", 2},
    {"Evelynn", "Manager", "Even with your sins, you're the sun", 3}};
    Menu();
    int Input;
    cout << "Enter option: ";
    cin >> Input;
    for (size_t i = 0; i < 2; i++)
    {
        switch (Input)
        {
        case a: cout << Company[i].Name << endl; break;
        case b: cout << Company[i].Rank << endl; break;
        case c: cout << Company[i].Nickname << endl; break;
        case d:
            switch (Company[i].Pref)
            {
            case 1: cout << Company[i].Name << endl; break;
            case 2: cout << Company[i].Rank << endl; break;
            case 3: cout << Company[i].Nickname << endl; break;
            default: break;
            }
            break;
        case e: cout << "Bye!"; return 0;
        default: break;
        }
    }
return 0;
}

void Menu()
{
    cout << "Employee list\n" << endl
         << "\t1. Show by name" << endl // 1
         << "\t2. Show by rank" << endl // 2
         << "\t3. Show by nickname" << endl // 3
         << "\t4. Show by preference" << endl // 4
         << "\t5. Leave" << endl; // 5
}