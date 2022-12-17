#include <iostream>
#include <cstring>
using namespace std;

void V1();

int main() // int main() version 2 without comparison
{
    char String[20] {"Abracadabra mais um"};
    for (size_t i = 0; String[i]; i++)
    {
        cout << String[i];
    }
}

void V1() // int main() version 1 w/ comparison
{
    char String[25] {"Hocus Pocus plus one"};
    for (size_t i = 0; i < strlen(String); i++)
    {
        cout << String[i];
    }
}