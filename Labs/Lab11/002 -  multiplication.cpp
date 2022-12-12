#include <iostream>
#include <cstdlib>

int main()
{
    using namespace std;

    char string[16];
    int a,b;

    cout << "Enter 2 integers: ";
    cin >> string >> a;
    b = atoi(string)*a; //INT_MAX
    cout << "The result of multiplication between them is " << b << ".";
    return 0;
}
