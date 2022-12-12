#include <iostream>

int main()
{
    using namespace std;

    long long meters;
    const int metersinkm = 1000;
    unsigned long long kms, remainder;

    cout << "Enter the distance in meters: " << endl;
    cin >> meters;

    if (meters < 0)
    {
        cout << "Invalid number, try again.";
        return 0;
    }
    
    kms = meters/metersinkm;
    remainder = meters%metersinkm;
    cout << meters << " meters are equivalent to " << kms << " kilometers and " 
         << remainder << " meters.";

    return 0;
}