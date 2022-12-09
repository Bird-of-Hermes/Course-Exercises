#include <iostream>

// not a programming one
// int a,b,c;
// a=1+2; // line 1 -> 3
// b=1+a; // line 2 -> 4
// c=1%5; // line 3 -> 1
// a=a+2; // line 4 -> 5
// b=a-c; // line 5 -> 4
// b=5*c/2; // line 6 -> 2

// proof:

int main()
{
    using namespace std;
    int a,b,c;
    a=1+2;
    cout << a << endl;
    b=1+a;
    cout << b << endl;
    c=1%5;
    cout << c << endl;
    a=a+2;
    cout << a << endl;
    b=a-c;
    cout << b << endl;
    b=5*c/2;
    cout << b << endl;
}