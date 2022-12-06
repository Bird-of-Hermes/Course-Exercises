#include <iostream>
using namespace std;

int main()
{
    short a;
    int b;
    long c;
    long long d;
    int total;

    sizeof a;
    sizeof b;
    sizeof c;
    sizeof d;
    total = sizeof a + sizeof b + sizeof c + sizeof d;
    cout << "short: " << sizeof a << " bytes\n";
    cout << "int: " << sizeof b << " bytes\n";
    cout << "long: " << sizeof c << " bytes\n";
    cout << "long long: " << sizeof d << " bytes\n";
    cout << "total: " << total << " bytes";

    return 0;
}