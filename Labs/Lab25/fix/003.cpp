#include <iostream>
using namespace std;

double* Filler(double [], double[]);
void Display(const double[], double*);
void Invert(double[], double*);

int main()
{
    int Size = 20;
    double Abc[Size]{};
    double *ptr = Filler(Abc, Abc+3);
    Display(Abc, ptr);
    Invert(Abc, ptr);
    Display(Abc, ptr);
}

double* Filler(double Abc[], double Bcd[])
{
    double *ptr;
    cout << "Enter with up to " << Bcd-Abc << " numbers to fill the array: ";
    for (; Abc < Bcd; Abc++)
    {
        int temp;
        cin >> temp;
        *Abc = temp;
    }
    ptr = Bcd; 
    // ignore what the exercise say about this return value being the following after Bcd
    // it's gotta be the same otherwise you're gonna have problems with the exhibition
    return ptr;
}

void Display(const double Abc[], double* end)
{
    cout << "Displaying array:\n";
    for (; Abc < end; Abc++)
        cout << *Abc << " ";
}

void Invert(double Abc[], double* end)
{
    cout << "\nInverting the array\n";
    while(Abc < end-1)
    {
        double temp = *Abc;
        *Abc++ = *(--end);
        *(end) = temp;
    }
}