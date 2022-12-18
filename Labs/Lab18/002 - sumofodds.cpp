#include <iostream>
using namespace std;

int main()
{
    int32_t SumOfOdds{};
    for (size_t i = 1; i < 100; i=i+2)
    {
        SumOfOdds = SumOfOdds+i;
    }
    cout << SumOfOdds;
}