#include <iostream>
using namespace std;

struct bowl
{
    bool state; // true for full / false for empty
    bool food; // true for soup / false for cangee
};

void hunger(bowl*);

int main()
{
    bowl full{true, true};
    bowl *ptr = &full;
    cout << "There is a bowl" << endl;
    switch (full.food)
    {
    case true:
        cout << "The bowl is full";
        break;
    
    default:
        cout << "The bowl is empty";
        break;
    }
    hunger(&full);
    cout << "\n\"Hunger\" strikes the player!" << endl;
    switch (full.food)
    {
    case true:
        cout << "The bowl is full";
        break;
    
    default:
        cout << "The bowl is empty";
        break;
    }
}

void hunger(bowl*ptr)
{
    ptr->food = false;
}