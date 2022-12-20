#include <iostream>
using namespace std;

int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t e = 0; e < 5-i; e++)
        {
            cout << " ";
        }
        
        for (size_t j = 0; j<2*i+1 ; j++) // 2*i+1 -> Max = 9 // i=0..$ -> i=1..$$$ . . . 
        {
            cout << "$";
        }
        cout << endl;
    }
}