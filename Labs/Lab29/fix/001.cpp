#include <iostream>
using namespace std;

void Exercise (char* String, bool Times = false)
{
    static int Counter = 1;
    if(Times == true)
        for(size_t i = 0; i < Counter; i++) {cout << String << endl;}
    else
        {cout << String;}
    ++Counter;
}