#include <iostream>
#include <cstring>
using namespace std;

struct Fish
{
    char Type[20];
    float Weight;
    uint32_t Lenght;
}; 

int main()
{
    Fish exercise;
    cout << "Size of vector: ";
    int A;
    cin >> A;
    cout << "Criating a vector of size " << A << endl;
    Fish *ptr = new Fish[A]; // dynamically allocating memory
    ptr[1] = {"Piaba",6.7,8}; // initializing

    // for reading use "cin >> ptr[1].Lenght/Weight;".
    // To read a ptr[1].Type input you need to "cin.getline(ptr[1]->Type, 20);".

    cout << "Type of Fish: " << ptr[1].Type << endl; // displaying
    cout << "Weight: " << ptr[1].Weight << endl; // displaying
    cout << "Lenght: " << ptr[1].Lenght << endl; // displaying
    
    delete ptr; // releasing the dynamically allocated memory

    return 0;
}