#include <iostream>
using namespace std;

const char Months[4][10] = {{"March"},{"April"},{"May"},{"June"}};

void Fill(double [], int);
void Display(double [], int);

int main()
{
    const int VSize = 4;
    double Costs[VSize];
    Fill(Costs, VSize);
    Display(Costs, VSize);

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