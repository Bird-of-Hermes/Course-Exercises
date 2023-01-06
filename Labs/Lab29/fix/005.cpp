#include <iostream>
using namespace std;

template <typename T>
T Max5(T a[5], int Size)
{
    T Biggest = 0;
    for (size_t i = 0; i < Size; i++) 
        if (a[i]>Biggest) 
            { Biggest = a[i];}
    
    return Biggest;
}

int main()
{
    double A[4] = {42.5,100.95,200.34,-4000.75};
    int B[6] = {0,1,2,3,4,5};
    cout << Max5(A, 4) << endl;
    cout << Max5(B, 6) << endl;
}