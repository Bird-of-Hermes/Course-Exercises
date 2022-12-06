#include <iostream>
using namespace std;

int main()
{
    cout << "How many KMs did you drive? ";
    float km, liters, kmperliter;
    cin >> km;
    cout << "How many liters did you consume? ";
    cin >> liters;
    kmperliter = km/liters;
    cout << "The consumption of your car was " << kmperliter << " kilometers per liter.";
    // It's not possible to always obtain the right result if using only integers.
}