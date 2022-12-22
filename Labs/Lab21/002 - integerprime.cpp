#include <iostream>
using namespace std;

int main()
{
    uint64_t Integer;
    cout << "Enter an integer: ";
    cin >> Integer;
    bool Prime = true;
    for (size_t i = 2; i <= Integer/2; i++)
    {
        if (Integer%i == 0)
            Prime = false;
            break;
    }
    if (Prime == false)
        cout << Integer << " is not prime";
    else
        cout << Integer << " is prime";
}