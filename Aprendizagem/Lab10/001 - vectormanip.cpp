#include <iostream>

using namespace std;

int main()
{
    int vector[5] = {10,80,30,45,15}, newvalue, PosShift;
    cout << "Vector: " << vector[0] << " " << vector[1] << " "
         << vector[2] << " " << vector[3] << " " << vector[4] 
         << "\n----------------------\nShift position: ";
    cin  >> PosShift;
    cout << "New value: ";
    cin  >> newvalue;
    vector[PosShift] = newvalue;
    cout << "----------------------\n";
    cout << "Vector: " << vector[0] << " " << vector[1] << " "
         << vector[2] << " " << vector[3] << " " << vector[4];
    return 0;
}
