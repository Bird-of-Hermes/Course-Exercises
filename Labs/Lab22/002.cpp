#include <iostream>
using namespace std;

int main()
{
    cout << "Enter words (@ to leave):" << endl;
    char words[100];
    size_t CounterVogalsA{}, CounterVogalsE{}, CounterVogalsI{}, CounterVogalsO{}, CounterVogalsU{};
    cin.getline(words, 100, '@');
    for (size_t i = 0; words[i]; i++)
    {
        switch (words[i])
        {
        case 65:
        case 97: CounterVogalsA++;
            break;
        case 69:
        case 101: CounterVogalsE++;
            break;
        case 73:
        case 105: CounterVogalsI++;
            break;
        case 79:
        case 111: CounterVogalsO++;
            break;
        case 85:
        case 117: CounterVogalsU++;
            break;
        }
    }

    cout << "a: " << CounterVogalsA << endl
         << "e: " << CounterVogalsE << endl
         << "i: " << CounterVogalsI << endl
         << "o: " << CounterVogalsO << endl
         << "u: " << CounterVogalsU << endl;

    return 0;
}