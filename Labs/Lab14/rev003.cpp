#include <iostream>
#include <string>

using namespace std;

struct fish
{
    string name;
    float weight;
    short lenght;
};

int main()
{
    fish peixe;
    fish *pointer = &peixe;
}