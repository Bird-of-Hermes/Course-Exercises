#include <iostream>
#include <string>

using namespace std;

struct fish
{
    string name;
    float weight;
    short lenght;
};

void display(fish); // ver. 1
void displaypointer(fish *ptr); // ver. 2

int main()
{
    fish peixe = {"Small fish", 6.2, 5};
    fish *pointer = &peixe;
    display(peixe);
    displaypointer(pointer);
}

void display(fish peixe) // add couts in between statements for the user to know what is each information
{
    cout << "--Variable version--\n" << endl;
    cout << peixe.name << endl;
    cout << peixe.weight << endl;
    cout << peixe.lenght << endl;
}

void displaypointer(fish *ptr)  // add couts in between statements for the user to know what is each information
{
    cout << "\n--Pointer version--\n" << endl;
    cout << ptr->name << endl;
    cout << ptr->weight << endl;
    cout << ptr->lenght << endl;
}