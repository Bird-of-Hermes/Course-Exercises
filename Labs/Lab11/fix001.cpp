#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int size = 10;
    char Fname[size], Lname[size];
    cout << "First name? ";
    cin >> Fname;
    cout << "Last name? ";
    cin >> Lname;
    cout << "Good morning, " << Fname << " " << Lname 
         << ".\n" "Welcome, " 
         << Fname[0] << Lname[0] << ".";
    return 0;
}

// Works for 1 surname only