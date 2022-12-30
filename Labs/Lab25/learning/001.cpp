#include <iostream>
using namespace std;

void CountingNums(int*, int*, int); // again the question is badly written, 
// we can't test for 2 different numbers with only 1 parameter

int main()
{
    int Array[10]{2,1,2,4,5,2,9,2,1,2};
    CountingNums(Array,Array+7,2);

    return 0;
}

void CountingNums(int* Start, int* End, int Num)
{
    int Counting = 0;
    for (; Start < End; Start++)
    {
        if (*Start == 2)
            Counting++;
    }
    cout << "There are " << Counting << " numbers of value " << Num << " in the provived array range";    
}