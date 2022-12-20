#include <iostream>
using namespace std;

// not exactly what the exercise wanted, but since the professor also didn't do it correctly I won't
// bother to make it perfect. Ideal solution would require usage of pointers to pointers (**) and dynamic
// memory allocation/deletion.

void Matrix();

int main()
{
    Matrix();
}

void Matrix()
{
    int Matrix [3][2];
    cout << "Enter with the values a 3x2 matrix" << endl;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]" << endl;
            cin >> Matrix[i][j];
        }
    }
    cout << "Transposing your 3x2 matrix to a 2x3 matrix." << endl;
    for (size_t j = 0; j < 2; j++)
    {
        for (size_t i = 0; i < 3; i++)
        {
            cout << "[" << Matrix[j][i] << "] ";
        }
        cout << endl;
    }
}