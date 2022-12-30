#include <iostream>
using namespace std;

void Order(int[], size_t Z);

int main()
{
    cout << "Enter with pair of integer numbers (0 to end) ";
    int Numbers[20]{}, Number;
    size_t Z = 0;
    do
    {
        cin >> Number; // Have to do this, or else there's a synchronization error
        Numbers[Z] = Number;
        Z++;

    }while(Number != 0);
    Order(Numbers, Z);
}

void Order(int Numbers[], size_t Z)
{
    int a = 0, b = 0;
    cout << "Ordered pairs: \n";
    for (size_t i = 0; i < Z; i = i+2)
    {
        a = Numbers[i];
        b = Numbers[i+1];
        if(a == 0 || b == 0)
        break;
        
        cout << "(" << (a>b?b:a) << "," << (a>b?a:b) << ")\n";
    }
}