#include <iostream>

using namespace std;

int main()
{
    double x1,x2;
    int y;
    cout << "Insert x1's value: " << endl;
    cin >> x1;
    cout << "Insert x2's value: " << endl;
    cin >> x2;
    y = int(x1)+int(x2);
    cout << "The integer addition of both values is " << y << endl;

    return 0;
}