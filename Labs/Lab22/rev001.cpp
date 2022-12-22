#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout << "Enter an integer (positive or negative): ";
    cin >> x;
    x = sqrt(x*x);
    cout << x;
}