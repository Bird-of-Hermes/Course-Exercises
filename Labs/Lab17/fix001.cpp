#include <iostream>
using namespace std;

int main()
{
    for (size_t i = 0, j = 1; i < 5; i++, j++)
    {
        for (size_t i1 = 0; i1 < j; i1++)
        {
            cout << "*";
        }
        cout << endl;
    }       
    for (size_t i = 0, j = 4; i < 5; i++, j--)
    {
        for (size_t i1 = 0; i1 < j; i1++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}