#include <iostream>

using namespace std;

union carcolor
{
    char colorname[33];
    char lettercode[5];
    int num;    
};

struct car
{
    char modelname[40];
    int fabyear;
    carcolor color;
    int price;
};

int main()
{
    car storage[10] = {{"Vectra", 2009, "Blue", 58000},{"Polo", 2008, "Black", 45000}};

    cout << "Enter with the 3rd car data." << "\nModel name: ";
    cin.getline(storage[2].modelname, 40);
    cin.ignore();
    cout << "Year of fabrication: ";
    cin >> storage[2].fabyear;
    cout << "Color name: ";
    cin.ignore();
    cin.getline(storage[2].color.colorname, 33);
    cout << "Price: ";
    cin >> storage[2].price;

    cout << "\n\n-----These are your stored cars-----";
    for (size_t i = 0; i < 3; i++)
    {
        cout << "\nCar model: " << storage[i].modelname << endl;
        cout << "Year of fabrication: " << storage[i].fabyear << endl;
        cout << "Color: " << storage[i].color.colorname << endl;
        cout << "Price: $" << storage[i].price << "\n" << endl; 
    }
    return 0;
}