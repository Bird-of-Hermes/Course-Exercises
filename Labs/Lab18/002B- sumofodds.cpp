#include <iostream>
using namespace std;

int main()
{
    int32_t SumOfOdds{};
    { size_t i = 1; // making this variable local
        do
        {
            SumOfOdds = SumOfOdds+i;
            i=i+2;
        } while (i<100);
    }
    cout << SumOfOdds;
}