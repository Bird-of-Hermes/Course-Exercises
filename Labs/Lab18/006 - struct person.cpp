#include <iostream>
#include <cstring>
using namespace std;

struct Persons
{
    char Name[15];
    uint16_t Age;
    bool Sex;
};

int main()
{
    Persons Loop{};
    size_t i = 0;
    float Avg{};
    do
    {
        cout << "Name (\"end\" to leave): ";
        cin >> Loop.Name;
        cout << "Age: ";
        cin >> Loop.Age;
        i++;
        Avg = Avg+Loop.Age;
    } while (strcmp(Loop.Name, "end"));
    Avg = Avg/float(i);
    cout << "Age average = " << Avg;
}

// pretty sure this program could be a lot more, but the exercise didn't want to push us further