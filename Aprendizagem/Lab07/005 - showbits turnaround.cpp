#include <iostream>
#include <bitset>

using namespace std;

// Skipping this exercise appropriate solution because the <bitset> library exists. Also, the exercise
// from fix005 wasn't done.

int main()
{
    cout << "Input any number: " << endl;
    int num;
    cin >> num;
    cout << "The binary (32 digits long) representation of this number is " << bitset<32>(num) << endl;

    return 0;
}