#include <iostream>

using namespace std;

void codify(int a);
void decodify(int a);

int main()
{
    cout << "Input a letter: ";
    char letter;
    cin >> letter;
    codify(letter);
    decodify(letter);
    return 0;
}

void codify(int a)
{
    char ch = a+3;
    cout << ch << endl;
}

void decodify(int a)
{
    char ch = a-3;
    cout << ch << endl;
}