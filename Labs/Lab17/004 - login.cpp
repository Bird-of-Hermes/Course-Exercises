#include <iostream>
#include <cstring>
using std::cout, std::cin, std::endl;

struct Register
{
    char Name[17];
    char Password[17];
};

int main()
{
    Register AdminLogin{"Duck", "12345"};
    Register User {};
    
    cout << "Enter your login: ";
    cin >> User.Name;
    cout << "Enter your password: ";
    cin >> User.Password;

    for (size_t i = 0; i < 17; i++)
    {
        if (User.Name[i] != AdminLogin.Name[i])
        {
            cout << "Login/Password don't match. Try again.";
            return 0;
        }
        if (User.Password[i] != AdminLogin.Password[i])
        {
            cout << "Login/Password don't match. Try again.";
            return 0;
        }
    }
    cout << "Login Successful";
}