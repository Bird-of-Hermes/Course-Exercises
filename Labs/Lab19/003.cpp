#include <iostream>
using namespace std;

int main()
{
    int mat[2][3] =
    {{1,2,3},{4,5,6}};
    cout << mat[0][0] << endl;
    cout << mat[0] << endl;
    cout << &mat[0][0];
}