#include <iostream>
using namespace std;

void Display()
{
    static int counter = 0;
    cout << "Calling number " << counter+1 << endl;
    counter++;
}

int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        Display();
    }
    
}