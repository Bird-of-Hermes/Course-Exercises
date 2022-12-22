#include <iostream>
#include <iomanip>
using namespace std;

// for switch case
enum {a=97,b,c,s=115}; 
// constants
float const Lettuce = 1.25;
float const Beet = 0.65;
float const Carrot = 0.9;

struct SuperMarket
{
    float LettuceAmount{};
    float BeetAmount{};
    float CarrotAmount{};
};

void Menu(); // Prototype

int main()
{
    SuperMarket Buy;
    float Sum[4]{}, Discount{};
    char Answer;
    Menu();
    // Logic
    do
    {
        cin >> Answer;
        switch(Answer)
        {
        case 65:
        case a: cout << "Enter amount of Lettuce: "; cin >> Buy.LettuceAmount; break;
        case 66:
        case b: cout << "Enter amount of Beet: "; cin >> Buy.BeetAmount; break;
        case 67:
        case c: cout << "Enter amount of Carrot: "; cin >> Buy.CarrotAmount; break;
        case 83:
        case s: break;
        }
    }while (Answer != 's');
    // Calc
    Sum[0] = Buy.LettuceAmount*Lettuce;
    Sum[1] = Buy.BeetAmount*Beet;
    Sum[2] = Buy.CarrotAmount*Carrot;
    Sum[3] = Sum[0]+Sum[1]+Sum[2];
    if (Sum[3] > 100)
        Discount = Sum[3]*0.05;
    // Finish
    cout << fixed << setprecision(2);
    cout << "\nItem\tPrice/Kg\tOrder (Kg)\tPartial Total" << endl
         << "-------\t--------\t---------\t--------------" << endl 
         << "Lettuce\t$ " << Lettuce << "/Kg\t" << Buy.LettuceAmount << "Kg\t\t$ " << Sum[0] << endl
         << "Beet\t$ " << Beet << "/Kg\t" << Buy.BeetAmount << "Kg\t\t$ " << Sum[1] << endl
         << "Carrot\t$ " << Carrot << "/Kg\t" << Buy.CarrotAmount << "Kg\t\t$ " << Sum[2] << endl
         << "------------------------------------------------" << endl;
    cout << "Order total:\t\t\t\t$ " << Sum[3] << endl
         << "Discount:\t\t\t\t$ " << Discount << endl
         << "Delivery cost:\t\t\t\t$ 10.00" << endl
         << "------------------------------------------------" << endl
         << "Total to pay:\t\t\t\t$ " << (Sum[3] - Discount)+10 << endl;
}

void Menu() // Displays the menu for the user
{
    cout << "SuperMarket ABC" << "\n--------------------" << endl 
         << "a) Lettuce\t $1.25/Kg" << endl
         << "b) Beet\t\t $0.65/Kg" << endl
         << "c) Carrot\t $0.90/Kg" << endl
         << "Make your order using letters (a, b, c) and (s) to finish" << endl;
}