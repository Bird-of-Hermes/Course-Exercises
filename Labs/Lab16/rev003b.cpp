#include <iostream>
using namespace std;

void ForLoop(int[], int);

int main()
{
    int SV[5] = {15,29,48,10,35};
    unsigned int Sizeof = (sizeof(SV)/sizeof(int)); // determines the size of the array
    ForLoop(SV, Sizeof);
    return 0;
}

void ForLoop(int SV[], int Size)
{
    for (size_t i = 0; i < Size; i++)
    {
        cout << SV[i] << endl;
    }
}