#include <iostream>
using namespace std;
enum mes {Jan=1,Fev,Mar,Abr,Mai,Jun,Jul,Ago,Set,Out,Nov,Dez};
int main()
{
mes inicio, fim;
inicio = Mar; // inicio do semestre
fim = Jun; // fim do semestre
cout << "Digite o número do mês atual: ";
int atual;
cin >> atual;
if (atual >= inicio && atual <= fim)
cout << "Você está em período de aulas.\n";
else
cout << "Férias!\n";
return 0;
}