#include <iostream>
using namespace std;

// prototypes
void Read(int*, int);
void Display(int*, int);

int main()
{
    cout << "How many integers do you wish to store in a vector: ";
    int ManyVectors;
    cin >> ManyVectors;
    int *ptr = new int [ManyVectors]; // allocating dynamic memory
    Read(ptr, ManyVectors);
    cout << "----------------------------------------" << endl; // formatting
    Display(ptr, ManyVectors);
    delete ptr; // releasing dynamic memory
}

void Read(int* ptr, int Size)
{
    cout << "\n"; // formatting
    for (size_t i = 0; i < Size; i++)
    {
        cout << "Enter value for the vector of index " << i << ": ";
        cin >> ptr[i];
    }
}

void Display(int* ptr, int Size)
{
    for (size_t i = 0; i < Size; i++)
    {
        cout << "In the vector of index " << i << " it is stored: " << ptr[i] << endl;
    }
    cout << "\n"; // formatting
}