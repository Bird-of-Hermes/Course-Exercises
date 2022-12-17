#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char Word[25], Inverted[25];
    cout << "Enter a word to discover: ";
    cin >> Word;
    {int Strlen = strlen(Word);
    for (size_t i = 0; Word[i]; i++)
    {
        // first i equals 0, so it'll copy the last character '\0' making it impossible for cout to read
        Inverted[i] = Word[Strlen-i-1];
    }
    Inverted[Strlen] = {'\0'};
    }
    cout << Word << " read backwards is " << Inverted << endl;
    if (strcmp(Word, Inverted))
        cout << Word << " is not a palyndrome\n";
    else
        cout << Word << " is a palyndrome\n";
}