#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite um número entre 0-10\n";
    for (cin >> n; n != 7; )
    {
       cin >> n;
    }
    cout << "Sim, 7 é meu número favorito.\n";
}