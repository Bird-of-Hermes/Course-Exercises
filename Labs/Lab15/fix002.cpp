#include <iostream>
using namespace std;

struct Balloon
{
    float Diameter; // in meters
    char Brand[20]; // brand name
    int Model; // num of model
};

int main()
{
    Balloon *ptr = new Balloon;
    cout << "Enter with the balloon diameter: ";
    cin >> ptr->Diameter;
    cin.ignore();
    cout << "Brand name: ";
    cin.getline(ptr->Brand, 20);
    cout << "Model number: ";
    cin >> ptr->Model;
    cout << "\n--------------------\n" << endl;
    cout << "Balloon's brand: " << ptr->Brand 
         << "\nModel: " << ptr->Model 
         << "\nDiameter: " << ptr->Diameter;
    
    delete ptr;

    return 0;    
}