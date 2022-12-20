#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Enter up to 10 donative values (0 to end): ";
    double Donates[10]{}, Average{}, Sum{};;
    size_t Counter = 0, Counter1{};
    for (; Counter < 10; Counter++)
    {
        cin >> Donates[Counter];
        Sum = Sum+Donates[Counter];
        if(Donates[Counter]==0)
        break;
    }
    if (Counter == 0)
        Average = 0;
        else
        Average = Sum/Counter;
    for (size_t j = 0; j < 10; j++)
    {
       if (Donates[j]>Average)
       {
        Counter1++;
       }
    }
    cout << fixed << setprecision(2);
    cout << "The average of donations was $" << Average << "." << endl;
    cout << Counter1 << " donations were above the average.";
}