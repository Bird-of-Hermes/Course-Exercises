#include <iostream>
#include <fstream>
using namespace std;

struct Function
{
    int max;
    int maxpos;
    int min;
    int minpos;
};

Function maxmin(const int*);

int main()
{
    int Array[100];

    ifstream RR;
    RR.open("002text.txt");
    for (size_t i = 0; i < 100; i++)
    {
        int temp;
        RR >> temp;
        Array[i] = temp;
    }
    RR.close();
    Function Datas = maxmin(Array);
    cout << "The largest number in the array is " << Datas.max << ", found in the position " << Datas.maxpos
         << "\nThe smallest number in the array is " << Datas.min << ", found in the position " << Datas.minpos;
    return 0;
}

Function maxmin(const int* Array)
{
    Function returnvalues;
    returnvalues.min = INT_MAX;
    returnvalues.max = INT_MIN;
    for (size_t i = 0; i < 100; i++)
    {
        if (Array[i] > returnvalues.max)
        {
            returnvalues.max = Array[i];
            returnvalues.maxpos = i;
        }
        // don't use else here, otherwise a text file that only increases will never input correctly
        // into returnvalues.min since it will always executes the first if and will not check the else
        if (Array[i] < returnvalues.min)
        {
            returnvalues.min = Array[i];
            returnvalues.minpos = i;
        }
    }
    return returnvalues;
}