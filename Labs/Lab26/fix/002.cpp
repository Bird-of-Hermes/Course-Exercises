#include <iostream>
using namespace std;

const int VSize = 4;
const char * Months[4] = {{"March"},{"April"},{"May"},{"June"}};

struct Doubles
{
    double Array[VSize];
};

void Fill(double [], int);
void Display(double [], int);

int main()
{
    Doubles Costs;
    Fill(Costs.Array, VSize); // could also use just Costs, but would have to change much of everything
    Display(Costs.Array, VSize);

    return 0;
}

void Fill(double Costs[], int VSize)
{
    double Total = 0;
    cout << "\nFilling spaces\n";
    for (size_t i = 0; i < VSize; i++)
    {
        cout << "Enter with the amount spent in the month of " << Months[i] << ": ";
        cin >> Costs[i];
    }
}

void Display(double Costs[], int VSize)
{
    double Total = 0;
    for(size_t i = 0; i < VSize; i++)
    {
        cout << "Month of " << Months[i] << ", $" << Costs[i] << "\n";
        Total += Costs[i];
    }
    cout << "\nTotal spent: $" << Total; 
}