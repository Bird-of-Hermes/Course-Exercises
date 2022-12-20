#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4]{{3,1,5,5},{1,5,5,6},{2,3,4,5},{4,9,1,8}};
    int Sum {};
    cout << "The sum of columns is: ";
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
           Sum = Sum + matrix[j][i];
        }
        
        cout << Sum << " ";
        Sum = 0;
    }
}