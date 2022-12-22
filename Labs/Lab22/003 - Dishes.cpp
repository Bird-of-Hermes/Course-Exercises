#include <iostream>
#include <iomanip>
using namespace std;

struct Dishes
{
    char Name[30];
    float Price;
};

void Menu(Dishes* a);

int main()
{
    Dishes SnackBar[2]{{"Bauru", 22.5},{"Cheeseburger", 17.65}};
    char Answer{};
    float Sum{};
    int SnackNum;
    cout << "Do you want to order? (Y/N) "; 
    cin >> Answer;
    while (Answer != 'n' && Answer!= 'N') // to filter results better we may need a switch statement idk
    {
        Menu(SnackBar);
        cout << endl;
        cout << "Enter the number of the snack: ";
        cin >> SnackNum;
        cout << endl;
        switch (SnackNum)
        {
        case 1: Sum = Sum + SnackBar[0].Price;
            break;
        case 2: Sum = Sum + SnackBar[1].Price;
            break;
        default:
            break;
        }
        cout << "Do you want to keep ordering? (Y/N) ";
        cin >> Answer;
        cout << endl;
    }
    cout << "--------------------------------" << endl
         << "To pay: $ " << Sum;
}

void Menu(Dishes *a)
{
    cout << fixed << setprecision(2);
    cout << "-----------Menu-----------\n" << endl;
    for (size_t i = 0; i<2; i++)
    {
        cout << i+1 << "# Snack: " << a[i].Name << endl << "Price: $" << a[i].Price << endl;
    }
}