#include <iostream>

int main()
{
    using namespace std;
    int *pointer = (int*) 0x01;
    cout << *pointer;
}

// windows closes the program.