#include <iostream>
#include <cstring>

using namespace std;

char function(char[]);

int main()
{
    char word[15];
    cout << "Enter a word: ";
    cin >> word;
    cout << "In " << word << " the last letter is: " << function(word);
    return 0;
}

char function(char a[])
{
    char b = strlen(a)-1;
    return a[b];
}