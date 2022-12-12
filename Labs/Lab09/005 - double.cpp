#include <iostream>

int main()
{
    using namespace std;
    double x = 245.795;
    int y = int(x);
    
    cout << x << "\n" << y << endl;
    x = x*100;
    y = y*100;
    cout << x << "\n" << y << endl;
}

// Much of the data is lost during the trunkation that happens.
