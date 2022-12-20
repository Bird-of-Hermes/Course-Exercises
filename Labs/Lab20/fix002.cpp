#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter a, b and c (\"a\" > 1): ";
    int a,b,c,Sum{},Max,Min;
    cin >> a >> b >> c;
    Max = max(b,c);
    Min = min(b,c);

    for (size_t i = Min; i <= Max; i++)
    {
        if (!(i%a))
        {
           Sum = Sum + i;
        }
    }
    cout << "The sum of numbers between \"b\" and \"c\" that are divisible by a is " << Sum;
    return 0;
}