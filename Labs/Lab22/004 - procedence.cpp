#include <iostream>
using namespace std;

struct Item
{
    float Price;
    int Code;
};

// exercise done but it works for nothing, it's but a prototype of function
int main()
{
    Item Store[3]{};
    for (size_t i = 0; i < 3; i++)
    {
        cout << "Enter with the item code: ";
        cin >> Store[i].Code;
        switch (Store[i].Code)
        {
        case 1:
        case 2: cout << "South" << endl; break;
        case 3: cout << "North" << endl; break;
        case 4: cout << "Center West" << endl; break;
        case 5: 
        case 6: cout << "Northeast" << endl; break;
        case 7:
        case 8:
        case 9: cout << "South West" << endl; break;
            break;
        default: cout << "Invalid code"; return 0;
        }
    }
}