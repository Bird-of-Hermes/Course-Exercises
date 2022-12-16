#include <iostream>

using namespace std;

int main()
{
    int VectorOfInt[10]{46,78,40,96,74,58,32,56,91,6};
    int*ptr = VectorOfInt;
    int*ptr1 = &VectorOfInt[1];    
    for (size_t i = 0; i < 10; i = i+2)
    {
        cout << "[" << *(ptr+i) << "," << *(ptr1+i) << "] ";
    }
}