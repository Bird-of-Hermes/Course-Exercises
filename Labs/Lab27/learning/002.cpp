#include <iostream>
using namespace std;

struct Controller
{
    char name[40];
    int buttons;
    int axis;
};
// --------------------------------
void ListarNomes(Controller);
void ListarEixos(Controller);
// --------------------------------
void Enumerate(void(*f)(Controller))
{
    Controller vet[] = {{"Joy", 8, 4},{"Xbox", 10, 3},{"Play", 8, 6}};
    for (auto i : vet)
        f(i);
}

int main()
{
    Enumerate(ListarNomes);
    cout << endl;
    Enumerate(ListarEixos);
}

void ListarNomes(Controller A)
{
    cout << A.name << " ";
}

void ListarEixos(Controller A)
{
    cout << A.axis << "\t";
}