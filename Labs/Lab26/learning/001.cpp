#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a phrase: ";
    string Phrase;
    getline(cin, Phrase);
    int counter = 1;
    for (size_t i = 0; Phrase[i]; i++)
    {
        if (Phrase[i] ==  ' ' || Phrase[i] == '\n' || Phrase[i] == '\t')
        counter++; // counting number of words inside Phrase
    }
    cout << "There are " << counter << " words in this phrase!";

    return 0;
}