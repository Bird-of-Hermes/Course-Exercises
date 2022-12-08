#include <iostream>

using namespace std;

int main()
{
    float f1 = 24980154.854f;
    cout << f1 << endl;

    float f2 = 2e40f;
    cout << f2 << endl;

    double d1 = 293849384958473847.394;
    // using std::fixed to see the loss of precision
    cout << fixed << d1 << endl;

    double d2 = 2e315;
    cout << d2;
}
// f1 loses precision
// f2 returns infinite
// d1 loses precision
// d2 retuns infinite