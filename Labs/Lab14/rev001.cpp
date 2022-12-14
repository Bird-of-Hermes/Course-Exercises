#include <iostream>

using namespace std;

int main()
{
    double liters = 3.4;
    double* ptr = &liters;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
}