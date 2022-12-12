#include <iostream>

int main()
{
    using namespace std;

    cout << "Insert a real number: " << endl;
    double num;
    cin >> num;
    cout << "It's full part is: "    << int(num) << endl;
    cout << "It's fractional part is: " << (int(num) - num)*-1;
}