#include <iostream>
using namespace std;

int main()
{
    cout << "Enter with a positive integer: ";
    int A;
    cin >> A;
    cout << "Criating a vector of " << A << " integers...";
    int *ptr = new int[A];
    delete ptr; // freeing memory after usage
}