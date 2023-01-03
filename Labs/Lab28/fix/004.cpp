#include <iostream>
using namespace std;

struct Pair { int x; int y;};

void calc(const int x, const int y, int &Sum, int &Mult)
{
    Sum = x+y;
    Mult = x*y;
}

int main()
{
    Pair A;
    int Sum, Mult;
    cout << "Enter a pair of values: ";
    cin >> A.x >> A.y;
    calc(A.x, A.y, Sum, Mult);
    cout << "\nSum: " << Sum << "\nMult: " << Mult;
    
    return 0;
}