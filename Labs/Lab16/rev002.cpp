#include <iostream>
using namespace std;

int main()
{
    char Palot[15] = {"Pratique muito"};
    for (size_t i = 0;; i++)
    {
        cout << Palot[i] << endl;
        if(Palot[i] == '\0')
        return 0;
    }
}