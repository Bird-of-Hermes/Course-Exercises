#include <iostream>
#include <cstring>
using namespace std;

struct Items
{
    char Name[20];
    size_t Price;
};

int main()
{
    char MEPN[20];
    size_t Counter{}, Sum{}, i = 0, Comparer = 0;
    Items EletStore[30];
    char Answer{'Y'};
    cout << "Eletronics Store";
    while (true)
    {
        if (Answer == 'Y' || Answer == 'y')
        {
            cout << "\n---------------------------------" << endl;
            cout << "Item name: ";
            cin >> EletStore[i].Name;
            cout << "Item Price: ";
            cin >> EletStore[i].Price;
            if (EletStore[i].Price > 1000)
            {
            Counter++;
                if (EletStore[i].Price>Comparer)
                {
                    Comparer = EletStore[i].Price;
                    strcpy(MEPN, EletStore[i].Name);
                }
            }
            Sum = Sum + EletStore[i].Price;
            i++;
        }
        else 
        break;
        
        cout << "Wish to continue? [Y/N] ";
        cin  >> Answer;
    }
    cout << "Total: $" << Sum << endl << Counter << " itens are priced above $1000." << endl
         << MEPN << " is the most expensive of all.";
}