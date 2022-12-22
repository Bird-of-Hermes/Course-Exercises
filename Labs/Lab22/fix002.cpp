#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char text[80];
    cout << "Enter your text (@ to leave):" << endl;
    cin.getline(text, 80);
    for (size_t i = 0; i<80; i++)
    {
        if (islower(text[i]))
        text[i] = toupper(text[i]);        
        else if (isupper(text[i]))
        text[i] = tolower(text[i]);
        else if (isdigit(text[i]))
        text[i] = '\b';
    }
    for (size_t i = 0; text[i] != '@'; i++)
        cout << text[i];
    return 0;
}