#include <iostream>

int main()
{
    using namespace std;

    int x,y,result,remainder;
    cout << "Insert 2 integer numbers: " << endl;
    cin >> x >> y;
    result = x/y;
    remainder = x%y;
    cout << "Quotient is " << result << " and its remainder is ." << remainder << endl;

    return 0;
}