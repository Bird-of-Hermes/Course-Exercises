#include <iostream>
using namespace std;

int main()
{
    uint16_t Tdist {};
    float KMPrice, Price;
    cout << "What's the traveling distance? ";
    cin >> Tdist;
    if (Tdist<=200)
    {
        KMPrice = 0.5;
    } else if (Tdist < 400)
    {
        KMPrice = 0.4;
    } else
    {
        KMPrice = 0.3;
    }
    Price = Tdist*KMPrice;
    cout << "Price is $" << Price;
    return 0;
}