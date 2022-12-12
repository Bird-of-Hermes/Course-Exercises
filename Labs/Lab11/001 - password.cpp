#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char password[9] = {"12345678"}, userpassword[9];
    cout << "Enter the password: ";
    cin >> userpassword;
    if(strlen(userpassword) < 8 || strlen(userpassword) > 8) // verification #1
    {
        cout << "Invalid password!\n";
        return 0;
    }
    for(int i=0;i<9;i++)
    {
        if(password[i] != userpassword[i]) // verification #2
            {
                cout << "Invalid password!\n";
                return 0;
            }
        if(i==8)
            cout << "Correct password!\n";
    }
return 0;
}