#include <iostream>
#include <cmath>

using namespace std;

float square(float a);
float cube(float a);

int main()
{
    float number;
    cout << "Input any number: \n";
    cin >> number;
    cout << "Squared: " << square(number) << endl;
    cout << "Cubed: " << cube(number) << endl;
    cout << "Cubed to the square: " << cube(square(number)) << endl;
}

float square(float a)
{
    float square = a*a;
    return square;
}

float cube(float a)
{
    float cube = pow(a, 3);
    return cube;
}