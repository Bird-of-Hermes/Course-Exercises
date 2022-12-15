#include <iostream>
using namespace std;

struct Car
{
    char ModelName[25];
    uint16_t FabYear;
    uint32_t Price;
};

void RShow(Car*); // Receive and Show

int main()
{
    cout << "Enter the number of cars to record data: ";
    int NumCar;
    cin >> NumCar;
    Car*ptr = new Car[NumCar]; // alloc
    RShow(ptr);
    delete ptr; // del alloc
}

void RShow(Car*ptr)
{
    // for many cars, use for loops

    cout << "Enter with data for 2 cars\n" << endl;
    cin.ignore();
    cout << "Car 1 model name: ";
    cin.getline(ptr[0].ModelName, 25);
    cout << "Car 1 year of fabrication: ";
    cin.get();
    cin >> ptr[0].FabYear;
    cout << "Car 1 price: ";
    cin >> ptr[0].Price;

    cout << "Car 2 model name: ";
    cin.get();
    cin.getline(ptr[1].ModelName, 25);
    cout << "Car 2 year of fabrication: ";
    cin >> ptr[1].FabYear;
    cout << "Car 2 price: ";
    cin >> ptr[1].Price;

    cout << "------------------\n#1 Model name: " << ptr[0].ModelName << endl;
    cout << "#1 Price: " << ptr[0].Price << endl;
    cout << "#1 Year of fabrication: " << ptr[0].FabYear << endl;

    cout << "------------------\n#2 Model name: " << ptr[1].ModelName << endl;
    cout << "#2 Price: " << ptr[1].Price << endl;
    cout << "#2 Year of fabrication: " << ptr[1].FabYear << endl;

    int totalprice = ptr[0].Price;
    int totalprice2 = ptr[1].Price;
    int totalprice3 = totalprice+totalprice2;
    cout << "Total price is: $" << totalprice3;
}