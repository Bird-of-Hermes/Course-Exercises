#include <iostream>

using namespace std;

int main()
{
    char name[60], conc[2];
    cout << "What is your name? ";
    cin.getline(name, 60);
    cout << "Which concept do you deserve? ";
    cin >> conc;
    char conc2 = conc[0]+1;
    cout << "Good Morning " << name << " your concept is " << conc2 << ".";
    return 0;
}