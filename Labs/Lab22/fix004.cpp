#include <iostream>
using namespace std;

int main()
{
    cout << "Enter words to (s to leave):" << endl;
    char words[60];
    size_t CounterVogals{}, CounterConsonants{}, CounterOthers{};
    do
    {
        cin >> words;
        if (isalpha(words[0]))
        {
            if (words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u'
            ||  words[0] == 'A' || words[0] == 'E' || words[0] == 'I' || words[0] == 'O' || words[0] == 'U')
            CounterVogals++;
            else 
            CounterConsonants++;
        }
        else
        CounterOthers++; 
    } while (!(words[0] == 's' && words[1] == '\0'));
    CounterConsonants--;
    cout << CounterVogals << " words start with vogals" << endl
         << CounterConsonants << " words start with consonants" << endl
         << CounterOthers << " other words";
    return 0;
}