#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    size_t counter{};
    char Words[20]{};
    cout << "Enter words (\"ready\" to stop)" << endl;
    while (strcmp(Words, "ready"))
    {
        cin >> Words;
        counter++;
    }
    cout << "A total of " << counter-1 << " words have been entered.";
}