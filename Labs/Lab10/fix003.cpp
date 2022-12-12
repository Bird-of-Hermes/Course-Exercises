#include <iostream>

using namespace std;

int main()
{
    int elements[5], sum = 0;
    cout << "Enter 5 values: ";
    cin >> elements[0] >> elements[1] >> elements[2] >> elements[3] >> elements[4];
    for(int i=0; i<5; i++) // improving fix001.cpp solution
    {
        sum = sum + elements[i];
        if (i==4)
        cout << "The sum is " << sum << "." << endl;
    }
    return 0;
}