#include <iostream>

int main()
{
    using namespace std;
    
    cout << "Input a floating point number: " << endl;
    float number;
    cin >> number;
    cout << "Default notation: " << number << endl;
    cout << "Scientific notation: " << scientific << number << endl;
    cout << fixed;
    cout << "Decimal notation: " << number << endl;
    return 0;
}