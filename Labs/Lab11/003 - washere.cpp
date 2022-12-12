#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your full name: ";
    char name[60], date[11], washereat[14] = {" was here at "};
    cin.getline(name, 60);
    cout << "Date: ";
    cin >> date;
    cout << name << washereat << date << "." << endl;
    return 0;
}