#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
    long long Number, SumSq{}, SqSum{};
    cout << "Number: ";
    cin >> Number;
    for (size_t i = 1; i <= Number; i++)
    {
        SumSq = SumSq+i;
    }
    SumSq = SumSq*SumSq;
    for (size_t i = 1; i <= Number; i++)
    {
        SqSum = SqSum+(i*i);
    }
    cout << SumSq-SqSum;
}