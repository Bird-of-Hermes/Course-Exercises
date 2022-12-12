#include <iostream>

using namespace std;

int main()
{
    float celsius, result;
    cout << "Temperature in Celsius: ";
    cin >> celsius;
    result = (celsius*1.8) + 32;
    cout << result;
}