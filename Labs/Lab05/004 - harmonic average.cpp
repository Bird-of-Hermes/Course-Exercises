#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Input number 1: ";
    cin >> a;
    cout << "Input number 2: ";
    cin >> b;
    c = 2*a*b/(a+b);
    cout << "Harmonic average is: " << c << endl;
}