#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter with 2 values a and b: ";
    int a, b, Sum, Max, Min;
    cin >> a >> b;
    Min = min(a,b);
    Max = max(a,b);
    for (size_t i = Min; i <= Max; i++)
    {
        Sum = Sum+i;
    }
    Sum = Sum-a-b;
    cout << "Answer is " << Sum;
}