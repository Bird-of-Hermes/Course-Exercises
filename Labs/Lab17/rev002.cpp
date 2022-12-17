#include <iostream>

using namespace std;

int main()
{
    for (size_t i = 0, j = 1; i < 7; i++, j=j*2)
    {
        cout << j << " ";
    }
}