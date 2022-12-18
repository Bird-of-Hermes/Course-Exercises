#include <iostream>
using namespace std;

int main()
{
    int32_t SumOfOdds{};
    { size_t i = 1; // making this variable local
        while (i<100)
        {
            SumOfOdds = SumOfOdds+i;
            i=i+2;
        }
    }
    cout << SumOfOdds;
}