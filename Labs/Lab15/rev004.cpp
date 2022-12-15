#include <iostream>
#include <cstring>
using namespace std;

struct Fish
{
    char Type[20];
    float Weight;
    uint32_t Lenght;
}; 

void Random (Fish*);

int main()
{
    Fish exercise;
    cout << "Size of vector: ";
    int A;
    cin >> A;
    cout << "Criating a vector of size " << A << endl;
    Fish *ptr = new Fish[A]; // dynamically allocating memory
    ptr[0] = {"Piaba",6.7,8};
    Random(ptr);

    delete ptr; // releasing the dynamically allocated memory

    return 0;
}

void Random(Fish*ptr)
{
    cout << "The fish weights: ";
    cout << ptr[0].Weight;
}