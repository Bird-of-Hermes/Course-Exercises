#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed;
    cout.precision(8);
    float num1, num2, num3, num4, num5, mult;
    mult = 3.14159f;
    num1 = 256321.512f;
    num2 = num1*mult;
    num3 = num2*mult;
    num4 = num3*mult;
    num5 = num4*mult;
    cout << num1 << " \n" << num2 << " \n" << num3 << " \n" << num4 << " \n" << num5 << endl;

    return 0;
}