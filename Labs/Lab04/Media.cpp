#include <cmath>
#include <iostream>

using namespace std;

void Media()
{
    float inteiro1, inteiro2;
    cout << "Digite um valor inteiro: \n";
    cin >> inteiro1;
    cout << "Digite outro valor inteiro: ";
    cin >> inteiro2;
    float media;
    media = (inteiro1 + inteiro2)/2;
    cout << endl << "A media dos inteiros e: " << media << endl;
}
int main()
{
    Media();

    return 0;
}