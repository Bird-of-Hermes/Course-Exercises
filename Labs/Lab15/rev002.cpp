#include <iostream>
using namespace std;

struct Fish
{
    char Type[20];
    float Weight;
    uint32_t Lenght;
}; // can create a global variable here <--

int main()
{
    Fish exercise; // <-- variable creation on main()
    Fish *ptr = new Fish; // <-- dinamic allocation of memory
    delete ptr; // <-- freeing memory after usage
}