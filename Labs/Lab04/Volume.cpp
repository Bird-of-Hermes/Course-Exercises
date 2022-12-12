#include <cmath>
#include <iostream>

using namespace std;

void VolumeCilindro()
{
    float raio, base, volume;
    cin >> raio >> base;
    volume = 3.14159 * pow(raio, 2) * base;
    cout.precision (7);
    cout << "O volume do cilindro e: " << volume << endl;
}
int main()
{
    cout << "Digite o raio e a base do cilindro: \n";
    VolumeCilindro();
    return 0;
}