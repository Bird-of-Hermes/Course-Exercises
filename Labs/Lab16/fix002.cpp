#include <iostream>
using namespace std;

struct Car
{
    char Manufacturer[30];
    uint32_t FabYear;
};

int main()
{
    cout << "How many cars should be listed? ";
    uint32_t a;
    cin >> a;
    Car *ptr = new Car[a];
    
    for (size_t i = 0; i < a; i++)
    {
        cout << "Car #" << i+1 << "\nBrand: ";
        cin.ignore();
        cin.getline(ptr[i].Manufacturer, 30);
        cout << "Year: ";
        cin >> ptr[i].FabYear;
    }
    cout << "Here's your collection:\n";
    for (size_t i = 0; i < a; i++)
    {
        cout << ptr[i].Manufacturer  << "  " << ptr[i].FabYear << endl;
    }
}