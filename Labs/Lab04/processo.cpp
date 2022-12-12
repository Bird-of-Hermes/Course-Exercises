#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void ligar()
{
    cout << "- Ligando dispositivos \n";
}

void verificar()
{
    cout << "- Verificando Integridade \n";
}

void ativar()
{
    cout << "- Ativando processos \n";
}


int Inicializar()
{
    cout << " Inicializando sistema: \n";
    ligar();
    verificar();
    ativar();
    cout << " Inicialização concluída. \n";
    srand(time(NULL));
    return rand();
}

int main()
{
    cout << rand();
        if (rand() > 16384)
    {
        Inicializar();  
        cout << "\n Sistema em funcionamento";
    }
    else
    {
        cout << "\n Falha na Inicialização";
    }

    return 0;
}