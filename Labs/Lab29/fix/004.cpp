#include <iostream>
using namespace std;

template <typename T>
T Max5(T a[5])
{
    T Biggest = 0;
    for (size_t i = 0; i < 5; i++) 
        if (a[i]>Biggest) 
            { Biggest = a[i];}
    
    return Biggest;
}

int main()
{
    double A[5] = {42.5,100.95,200.34,-4000.75,98562.1};
    int B[5] = {0,1,2,3,4};
    cout << Max5(A) << endl;
    cout << Max5(B) << endl;
}