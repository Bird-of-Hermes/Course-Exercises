#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int(100);
    cout << "Stored content: " << *ptr << endl;
    cout << "New value: ";
    int something;
    cin >> something;
    *ptr = something;
    delete ptr;
}