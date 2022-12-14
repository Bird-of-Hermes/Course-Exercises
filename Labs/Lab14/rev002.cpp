#include <iostream>

int main()
{
    using namespace std;
    float torque[10] = {2.5,8.1,3.4,9.2,5.7,9.6,6.3,8.0,5.4,4.9};
    float *pointer = torque;
    cout << *pointer << endl;
    pointer = pointer+9; // same as pointer = &torque[9];
    cout << *pointer;
}