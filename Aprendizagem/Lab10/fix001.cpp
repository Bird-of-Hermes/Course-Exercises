#include <iostream>

using namespace std;

int main()
{
    float ProductsPrice[3] = {1.5f, 2.0f, 1.0f};
    float amount[3];
    cout << "Dear client,\nEnter the desired amount of kilograms:\nLettuce: ";
    cin >> amount[0];
    cout << "Beet: ";
    cin >> amount[1];
    cout << "Carrot: ";
    cin >> amount[2];
    cout << "\nResume of buy\n------------------\nLettuce\t = R$" 
    // Could add a variable for each of these but for the sake of saving memory I choose to not do so.
         << amount[0]*ProductsPrice[0] 
         << "\nBeet\t = R$"   << amount[1]*ProductsPrice[1] 
         << "\nCarrot\t = R$" << amount[2]*ProductsPrice[2]
         << "\n------------------\nTotal\t = R$" 
         << (amount[0]*ProductsPrice[0])+(amount[1]*ProductsPrice[1])+(amount[2]*ProductsPrice[2]);
    return 0;
}