#include <iostream>
using namespace std;

void Line(char ch);

int main()
{
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();
    Line(ch);
    cout << "Programming in C++" << endl;
    Line(ch);
}

void Line(char ch)
{
    for (size_t i = 0; i < 20; i++)
    {
        cout << ch;
    }
    cout << endl;
}