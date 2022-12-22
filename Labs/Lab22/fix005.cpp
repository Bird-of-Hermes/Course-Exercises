#include <iostream>
using namespace std;

void Menu();

int main()
{
    Menu();
    char Answer;
    do
    { 
        cout << "Choose your destiny: ";
        cin >> Answer;
        switch (int(Answer))
        { // could do an enum but whatever
        case 65:
        case 97: cout << "Inserting elements..." << endl; break;
        case 66:
        case 98: cout << "Removing elements..." << endl; break;
        case 67:
        case 99: cout << "Choosing elements..." << endl; break;
        case 68:
        case 100: cout << "The end it is !!"; return 0;
        default: cout << "Impossible Wish, Try again." << endl;
        }
    } while(true);
    return 0;
}

void Menu()
{
    cout << "System Menu\n" << endl;
    cout << "a) Insert" << endl 
         << "b) Remove" << endl
         << "c) Search" << endl
         << "d) Leave"  << endl;
}