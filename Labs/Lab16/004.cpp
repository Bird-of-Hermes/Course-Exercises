#include <iostream>
using namespace std;

int main()
{
    int B[10] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };

    for(size_t i = 0, j = 9 ; i < 6, j > 4; i++, j--)
    {
        cout << "[" << B[i] << "," << B[j] << "] ";
    }
}