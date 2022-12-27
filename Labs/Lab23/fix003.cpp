#include <iostream>
#include <fstream>
#include <cctype>
using std::cout, std::cin, std::endl;

enum {a=97,e=101,i=105,o=111,u=117,A=65,E=69,I=73,O=79,U=85};

int main()
{
    std::ifstream fin;
    fin.open("students.txt");
    if (!fin.is_open())
    {
        cout << "Error opening file #IFSTREAM";
        exit(EXIT_FAILURE);
    }
    char Character{};
  //  Character = fin.get();
  // counters
    size_t Consonants{}, Vogals{}, Others{};
    int Total = 0;
    fin >> Character;
    while(!fin.eof())
    {
        if (isalpha(Character))
        {
            switch(Character)
            {
            case A:
            case a: Vogals++; break;
            case E:
            case e: Vogals++; break;
            case I:
            case i: Vogals++; break;
            case O:
            case o: Vogals++; break;
            case U:
            case u: Vogals++; break;
            default: Consonants++; break;
            }
        }
        else
            Others++; 
        Total++;
        fin >> Character;
    }
    fin.close();
    cout << "Vogals:\t" << Vogals << endl
         << "Consonants: " << Consonants << endl
         << "Others:\t" << Others << endl
         << "Total:\t" << Total << endl;
    return 0;
}