#include <iostream>
using namespace std;

int main()
{
    char Text[80];
    cout << "Enter a phrase: ";
    cin.getline(Text, 80);
    for (size_t i = 0; Text[i]!='@'; i++)
    {
        cout << Text[i];
    }
}