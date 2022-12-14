// fixing code given to make it work with std::cin/std::cout
#include <iostream>

using namespace std;

enum mes {Jan=1,Fev,Mar,Abr,Mai,Jun,Jul,Ago,Set,Out,Nov,Dez};

istream & operator>>(istream&, mes&);
ostream & operator<<(ostream&, mes);

int main()
{
    mes inicio, fim;
    inicio = Mar; // inicio do semestre
    fim = Jun; // fim do semestre
    cout << "Digite o número do mês atual: ";
    mes atual;
    cin >> atual;
    if (atual >= inicio && atual <= fim)
    cout << "Você está em período de aulas.\n";
    else
    cout << "Férias!\n";
    return 0;
}

istream & operator>>(istream& is, mes& arg)
{
    int temp;
    is >> temp;
    if (temp >= Jan && temp <= Dez)
		arg = mes(temp);
    return is;
}

ostream & operator<<(ostream& os, mes arg)
{
    os << arg;
    return os;
}