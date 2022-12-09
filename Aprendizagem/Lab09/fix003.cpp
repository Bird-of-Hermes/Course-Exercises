#include <iostream>

int main()
{
    using namespace std;

    cout << "Insert a number of seconds: " << endl;
    int seconds;
    // using const as required
    const int secmin = 60; 
    const int minhours = 60; 
    const int hoursdays = 24;
    cin >> seconds;

    int days, rest, hours, min, seg;
    days = seconds/(hoursdays*minhours*secmin);
    rest = seconds%(hoursdays*minhours*secmin);
    hours = rest/(minhours*secmin);
    rest = rest%(minhours*secmin);
    min = rest/secmin;
    seg = rest%secmin;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << min << " minutes and "
         << seg     << " seconds.\n";
}