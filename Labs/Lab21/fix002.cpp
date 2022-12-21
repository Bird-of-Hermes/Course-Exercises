#include <iostream>
using namespace std;

int main()
{
    const double UPTO5000 = 5000, UPTO15000 = 15000, UPTO35000 = 35000;
    const double TAX1 = 0.10, TAX2 = 0.15, TAX3 = 0.20;
    double Calc = 0, Income, Tax = 0;

    cout << "Enter income to know: ";
    cin >> Income;
    
    while (Income>0)
    {
        if (Income<=UPTO5000)
            cout << "Don't pay a cent." << endl;
        else if (Income <= UPTO15000)
            Tax = (Income-UPTO5000)*TAX1;
        else if (Income <= UPTO35000)
            Tax = ((UPTO15000-UPTO5000)*TAX1)+(Income-UPTO15000)*TAX2;
        else
            Tax = (((UPTO15000-UPTO5000)*TAX1)+(UPTO35000-UPTO15000)*TAX2)+(Income-UPTO35000)*TAX3;
            cout << Tax << endl;
    }
}
