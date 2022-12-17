#include <iostream>

// only works for positive/negatives that fit in 64 bits. To make it work
// for greater numbers it would require the implementation of BigInt library

int64_t SumOfRange(int, int);

int main()
{
    using std::cout, std::cin, std::endl;
    int64_t RangeB,RangeE;
    cout << "Enter interval range (Beginning): ";
    cin >> RangeB;
    cout << "Enter interval range (Ending): ";
    cin >> RangeE;
    cout << SumOfRange(RangeB, RangeE);
}

int64_t SumOfRange(int Beginning, int Ending)
{
    int Sum{};
    for (int64_t i = Beginning; i <= Ending; i++)
    {
        Sum = Sum+i;
    }
    return Sum;
}