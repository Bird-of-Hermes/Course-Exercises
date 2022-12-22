#include <iostream>
using namespace std;

int main()
{
    uint64_t Sum{};
    for (size_t i = 0; i < 1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            Sum=Sum+i;
        }
    }
    cout << Sum;
}