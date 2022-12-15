#include <iostream>
using namespace std;

struct Car
{
    char ModelName[25];
    uint16_t FabYear;
    uint32_t Price;
};

int main()
{
    Car Storage[10] = {{"Vectra", 2009, 58000},{"Polo", 2008, 45000}};
    Car *ptr = Storage;
    cout << "Model name: " << ptr[1].ModelName << endl;
    cout << "Price: " << ptr[1].Price << endl;
    cout << "Year of fabrication: " << ptr[1].FabYear << endl;
}