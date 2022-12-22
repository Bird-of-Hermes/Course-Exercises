#include <iostream>
using namespace std;

int main()
{
    const int64_t MAX = 4000000;
    int64_t Sum{}, temp{};
    for (size_t i = 1, j = 1; i < MAX; i = i+j)
    {
        if (i % 2 == 0)
            Sum = Sum + i;
        temp = j;
        j = i;
        i = temp;
    }
    cout << Sum;
}