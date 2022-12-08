#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "What's your age? \n";
    float age;
    cin >> age;
    float seconds = 3.156e7 * age; 
    cout << age << " corresponds to " << seconds << " seconds." << endl;
    cout << age << " years of age can also be displayed as " << fixed << setprecision(1) << seconds << " seconds." << endl;
    return 0;
}