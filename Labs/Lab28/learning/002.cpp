#include <iostream>
using namespace std;

struct Tuple
{
    int a;
    int b;
    int c;
};

void Switch(Tuple &A, Tuple &B)
{
    Tuple C; // local scope variable used for switching values between A and B
    C = A;
    A = B;
    B = C;
}

int main()
{
    Tuple A {15, 20, 25}, B {40, 50, 60};
    cout << A.a << " " << A.b << " " << A.c << endl;
    cout << B.a << " " << B.b << " " << B.c << endl;

    cout << "\nSwitching values. . .\n";
    Switch(A,B);
    
    cout << A.a << " " << A.b << " " << A.c << endl;
    cout << B.a << " " << B.b << " " << B.c << endl;

    return 0;
}