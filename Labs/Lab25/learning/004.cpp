#include <iostream>
using namespace std;

int* ArrayCat(int*, int, int*, int);

int main()
{
    int Array[4]{1,4,5,7}, Array1[4]{3,2,8,9};
    int SizeA = sizeof(Array)/4;
    int SizeB = sizeof(Array1)/4;
    
    int * ptr =  ArrayCat(Array, SizeA, Array1, SizeB);
    
    cout << "Array 1: " << endl;
    for (size_t i = 0; i < SizeA; i++)
        cout << Array[i] << " ";
    
    cout << "\nArray 2: " << endl;
    for (size_t i = 0; i < SizeB; i++)
        cout << Array1[i] << " ";
    
    cout << "\nMerged Array: " << endl;
    for (size_t i = 0; i < (SizeA+SizeB); i++)
        cout << ptr[i] << " ";

    delete [] ptr;
    return 0;
}

int* ArrayCat(int* Ar1, int SizeA, int* Ar2, int SizeB)
{
    int* ptr = new int [SizeA+SizeB];
    for (size_t i = 0; i < SizeA; i++)
        ptr[i] = Ar1[i];
    for (size_t i = SizeB, j=0; i < SizeA+SizeB; i++, j++)
        ptr[i] = Ar2[j];
    
    return ptr;
}