#include <iostream>

using namespace std;

void lowerbits(int integer);

int main()
{
    int integer;

    cout << "Turning off the 16 lower binary digits" << endl;
    cout << "Input an integer: " << endl;
    cin >> integer;
    lowerbits(integer);
    return 0;
}

void lowerbits(int integer)
{
    int mask;
    for(short i = 15; i < 32; i++)
    {
        mask = ~(1 << i);
        integer = integer & mask;
        if (i == 31)
        cout << "It equals to " << integer << endl;
    }
}

//simple overflowing also works, but the exercise didn't want that simple solution.