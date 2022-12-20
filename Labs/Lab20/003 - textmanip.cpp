#include <iostream>
using namespace std;

int main()
{
    char ch[150]{};
    size_t Switches{};
    cout << "Enter a phrase (150 char limit, # to end): ";
    for (size_t i = 0; i < 150; i++)
    {
        cin.get(ch[i]);
        if (ch[i]=='#')
        {
            ch[i] = '\0';
            break;
        }
        else if (ch[i] == '!')
        {
            ch[i+1] = '!';
            Switches++;
            ++i;
        }
        else if (ch[i] == '.')
        {
            ch[i] = '!';
            Switches++;
        }
    }
    cout << endl << "Full phrase: " << ch << endl << Switches << " replacements.";
}