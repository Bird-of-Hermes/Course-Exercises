#include <iostream>
#include "001a.cpp"
using namespace std;

void (*print)(const char[]); // ponteiro global

void normal(const char texto[]);

void alternativo(const char texto[]);

void mensagem();

int main()
{
    cout << "Usar print normal [s/n]? ";
    char opcao;
    cin >> opcao;
    if (opcao == 's') print = normal;
    else print = alternativo;
    mensagem();
}

void normal(const char texto[]) { cout << texto << endl; }

void alternativo(const char texto[]) { cout << "<<< " << texto << " >>>" << endl; }