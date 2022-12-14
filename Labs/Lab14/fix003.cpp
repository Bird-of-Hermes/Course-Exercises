#include <iostream>

using namespace std;

int increment(int);
void Plus(int *);

int main()
{
    cout << "Enter an integer number";
    int num = 7;
    num = increment(num);
    cout << "\nResult after increment: " << num << endl;
    Plus(&num);
    cout << num << endl;

    return 0;
}

int increment(int num)
{
num++;
return num;
}

void Plus(int *ptr)
{
(*ptr)++;
}