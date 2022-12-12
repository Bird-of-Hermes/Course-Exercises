#include <iostream>

using namespace std;

void alarme();
void lersenha();

int main()
{
    alarme();
    lersenha();
    cout << "Finalizando..." << endl;
    cout << '\a';

    return 0;
}

void alarme()
{
    cout << "Iniciando...\n";
    cout << '\a';
}

void lersenha()
{
    cout << "Senha: ";
    int senha;
    cin >> senha;
}