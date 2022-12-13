#include <iostream>
using namespace std;
struct Book
{
    char title[80];
    char genre[20];

};

struct Game
{
    char title[30];
    char genre[20];
};

int main()
{
    Book borrowedB;
    Game borrowedG;
    bool answer;
    cout << "Enter 1 for a game or 0 for a book: ";
    cin >> answer;
    cin.ignore();
    if(answer == 1)
    {
        cout << "What game title do you want to return? ";
        cin.getline(borrowedG.title, 30);
    }
    else
    {
        cout << "What book title do you want to return? ";
        cin.getline(borrowedB.title, 80);
    }
    return 0;
}