#include <iostream>
using namespace std;

void Filler(double [], int);
void Display(const double[], int);
void Invert(double[], int);

int main()
{
    int Size = 20;
    double Abc[Size]{};
    Filler(Abc, Size);
    Display(Abc, Size);
    Invert(Abc, Size);
    Display(Abc, Size);
}

void Filler(double Abc[], int Size)
{
    cout << "Enter with up to " << Size << " numbers to fill the array: ";
    for (size_t i = 0; i < Size; i++)
    {
        int temp;
        cin >> temp;
        Abc[i] = temp;
    }
}

void Display(const double Abc[], int Size)
{
    cout << "Displaying array:\n";
    for (size_t i = 0; i < Size; i++)
        cout << Abc[i] << " ";
}

void Invert(double Abc[], int Size)
{
    cout << "\nInverting the array\n";
    double Cba[Size];
    for (size_t i = 0; i < Size; i++)
       Cba[i] = Abc[19-i];
    for (size_t i = 0; i < Size; i++)
       Abc[i] = Cba[i];
}