#include <iostream>
#include <cstring>
using std::cout, std::cin, std::endl;

int StrEqual(char[], char[]);

int main()
{
    char palavra[20] = "colega";
    if (StrEqual("colega", palavra))
    cout << "Iguais" << endl;
    else
    cout << "Diferentes" << endl;
}
 // just use strcmp...
int StrEqual(char a[], char b[])
{
    bool answer;
    for (size_t i = 0; a[i]; i++)
    {
        if (a[i] == b[i])
        answer = true;
        else
        answer = false;
    }
    return answer;
}