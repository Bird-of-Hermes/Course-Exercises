#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    float floatnum;
    cout << "Insert a floating-point: " << endl;
    cin >> floatnum;
    cout << "Default notation: " << floatnum << endl;
    cout << "Scientific notation: " << scientific << setprecision(2) << floatnum << endl;
    cout << "Decimal notation: " << fixed << floatnum << endl;

    return 0;
}