#include <iostream>

using namespace std;

void higherbits(int integer);

int main()
{
    int integer;

    cout << "Showing the 16 higher binary digits" << endl;
    cout << "Input an integer: " << endl;
    cin >> integer;
    higherbits(integer);
    return 0;
}

void higherbits(int integer)
{
    int mask;
    for(short i = 0; i < 16; i++)
    {
        mask = ~(1 << i);
        integer = integer & mask;
        if(i == 15)
        {
        int b = integer >> 16;
        cout << "It equals to " << b << endl;
        }
    }
}