#include <iostream>

using namespace std;

int main()
{
    float h2omass, gallonmass;
    h2omass = 3.0e-23;
    gallonmass = 4.0*950.0f;
    double mMpergallon = gallonmass/h2omass;
    float gallons;
    cout << "Input the quantity of gallons of water: " << endl;
    cin >> gallons;
    double result = gallons*mMpergallon;
    cout << "Inside " << gallons << " gallons there is " << result << " molecules of water." << endl;

    return 0;
}