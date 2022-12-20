#include <iostream>
// ?
using namespace std;

int main()
{
    int Table[10] {0,1,0,0,1,0,1,1,1,1};
    int Sum{};
    for (size_t i = 0; i < 10; i++)
    {
        Sum = Sum + Table[i];
    }
    cout << Sum;
}