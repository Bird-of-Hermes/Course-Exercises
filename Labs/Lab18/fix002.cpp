#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
    int Num{}, Sum{}, Counter{};
    float Avg{};
    cout << "Enter an integer number: ";
    cin >> Num;
    while(Num != 0)
    {   
        Counter++;
        Sum = Sum+Num;
        Avg = float(Sum)/float(Counter);
        cin >> Num;
    }
    cout << Counter << " numbers have been read" << endl;
    cout << "The sum of all entered numbers is: " << Sum << endl;
    cout << "The average of all entered numbers is: " << Avg << endl;
}