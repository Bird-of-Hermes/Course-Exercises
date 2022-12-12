#include <iostream>
using namespace std;

void honk();
void password();

int main()
{
    cout << "Initializing with a sound... \n";
    honk();
    cout << "Input your password: ______\b\b\b\b\b\b";
    password();
    cout << "Thank you!";

    return 0;
}

void honk()
{
    cout << "\a \a \a \a \a \a \a \a \a \a \a \a \n";
}

void password()
{
    int password;
    cin >> password;
}