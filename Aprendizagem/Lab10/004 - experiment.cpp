#include <iostream>

int main()
{   
    using namespace std;
    int vector[247] = {10,20,30,40,50};

    for(unsigned int i = 0;;i++)
    {
        unsigned int overflow;
        vector[i] = 61;
        cout << vector[1] << "\n" << i << "=";
    }
}

// The position where it stops varies with each try.