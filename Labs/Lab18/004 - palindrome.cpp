#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char Phrase[50]{}, Phrase1[50]{}, Inverted[50]{};
    cout << "Enter a phrase to discover: ";
    cin.getline(Phrase, 50);
    strcpy(Phrase1, Phrase);
    int Strlen = strlen(Phrase);
    for (size_t i = 0; Phrase[i]; i++)
        Inverted[i] = Phrase[Strlen-i-1];
    // inverts the phrase. ex.: a torre da derrota -> atorred ad errot a
    for (size_t i = 0; Inverted[i]; i++)
    {
        if (Inverted[i] == ' ') 
        {
            Inverted[i] = Inverted[i+1]; // do
            for (size_t j = i+1; Inverted[j]; j++) // while
            {
                Inverted[j] = Inverted[j+1];
            }
        }
        if (Phrase1[i] == ' ') 
        {
            Phrase1[i] = Phrase1[i+1]; // do
            for (size_t j = i+1; Phrase1[j]; j++) // while
            {
                Phrase1[j] = Phrase1[j+1];
            }
        }
    }  
    if(!(strcmp(Phrase1, Inverted)))
        cout << Phrase << " is a palindrome !!";
    else
        cout << Phrase << " isn't isn't a palindrome...";
}