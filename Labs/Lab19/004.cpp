#include <iostream>
using namespace std;

void DisplayVector(int (*matrix));

int main()
{
    int mat[][3] =
    {{1,2,3},{4,5,6}};
   
    DisplayVector(mat[0]);
}

void DisplayVector(int (*matrix))
{
    cout << matrix << endl;
}