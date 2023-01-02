#include <iostream>
using namespace std;

void Menu();
void Insert();
void Search();
void Remove();
void Leave();
void (*func[])(void) = {Menu, Insert, Search, Remove, Leave};

int main()
{
    const int a = 5;
    for (size_t i = 0; i < a; i++)
        func[i]();

    return 0;
}

///////////////////////////////  FUNCTIONS  /////////////////////////////////////////

void Menu()
{
    cout << "\nSystem Menu\n\n"
         << "1) Insert\n"
         << "2) Remove\n"
         << "3) Search\n"
         << "4) Leave\n"
         << "Choose: ";
}
void Insert()
{
    cout << "\n\nInsert is working\n";
}

void Remove()
{
    cout << "\nRemove is working\n";
}

void Search()
{
    cout << "\nSearch is working\n";
}

void Leave()
{
    cout << "\nLeave is working";
}