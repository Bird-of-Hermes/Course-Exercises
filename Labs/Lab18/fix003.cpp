#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
    float Daiane, Celia;
    size_t Counter = 0;
    cout << "How much are they starting? ";
    cin >> Daiane;
    Celia = Daiane;
    const float OriginDaiane = Daiane;
    do
    {
        Counter++;
        Celia = Celia+Celia*0.05;
        Daiane = Daiane+(OriginDaiane*0.1);
        cout << "Year " << Counter << ". Celia = R$" << Celia // alt+x this to after the while for a single answer
             << "\tDaiane = R$" << Daiane << endl;
    } while (Celia < Daiane);      
} // answer is always 27