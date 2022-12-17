#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter 10 integer values: ";
    int A[5],B[5],S[5];
    for (size_t i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        cin >> B[i];
    }
    cout << "Vector A: ";
    for (size_t i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << "Vector B: ";
    for (size_t i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl << "Vector S: ";
    for (size_t i = 0; i < 5; i++)
    {
        S[i] = A[i] + B[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout << S[i] << " ";
    }
    
}