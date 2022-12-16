#include <iostream>
using namespace std;

void ForLoop(int*);

int main()
{
    int SV[5] = {15,29,48,10,35};
    int*ptr = SV;
    ForLoop(ptr);
    return 0;
}

void ForLoop(int* ptr)
{
for (size_t i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }
}

// using pointers on exercise a) but can also use the same variable