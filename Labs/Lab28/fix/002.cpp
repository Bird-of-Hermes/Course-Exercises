#include <iostream>
#include <string>
using namespace std;

struct Cashier
{
    string Brand;
    float Height;
    float Width;
    float Lenght;
    float Volume;
};

void Asterix (Cashier & Reference)
{
    Reference.Volume = (Reference.Height*Reference.Width*Reference.Lenght)/100.0f;

    cout << Reference.Brand << endl;
    cout << Reference.Height << " cm" << endl;
    cout << Reference.Width << " cm" << endl;
    cout << Reference.Lenght << " cm" << endl;
    cout << Reference.Volume << " cubic meters" << endl;
}

int main()
{
    Cashier Something {"Full Metal", 25.3f, 40.12f, 30.55f};

    Asterix(Something);
}