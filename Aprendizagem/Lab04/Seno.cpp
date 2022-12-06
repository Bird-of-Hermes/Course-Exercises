#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int Angulo;
    cout << "Digite um ângulo \n";
    cin >> Angulo;
    double resultado;
    resultado = ((Angulo*3.141592)/180);
    cout << "O seno deste ângulo é igual a: " << sin(resultado) << endl;

    return 0;
}