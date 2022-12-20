#include <iostream>
using namespace std;

int main()
{
    int Sold[3][12];
    int Sum[3] {};
    const char* Months[20][12] = {
     {"January"},{"February"},{"March"},{"April"}
    ,{"May"},{"June"},{"July"},{"August"}
    ,{"September"},{"October"},{"November"},{"December"}};

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Enter with the number of books sold during the year " << i+1 << "\n" << endl;
        for (size_t j = 0; j < 12; j++)
        {
            cout << *Months[j] << ": ";
            cin >> Sold[i][j];
            Sum[i] = Sum[i]+Sold[i][j];
        }
        cout << endl << "--------------------\n" << endl;
    }
    cout << "Total sold per year" << endl;
    for (size_t i = 0; i < 3; i++)
    {
        cout << "Year " << i+1 << ": " << Sum[i] << endl;
    }
    int SumofSum{};
    for (size_t i = 0; i < 3; i++)
    {
        SumofSum = SumofSum + Sum[i];
    }
    
    cout << "The amount of books sold during these three years was: " << SumofSum;
}