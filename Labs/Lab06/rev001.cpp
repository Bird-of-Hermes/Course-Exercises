#include <iostream>
using namespace std;

#define black "\033[7;37;40m"
#define yellow "\033[1;33;44m"
#define green  "\033[32m"
#define red "\033[4;31m"
#define foreg   "\033[38;5;154m"
#define backg   "\033[38;5;0;48;5;154m"
#define default "\033[m"

int main()
{
    cout << black << "Black in white" << default << endl;
    cout << yellow << "Intense yellow with blue" << default << endl;
    cout << green << "Normal green" << default << endl;
    cout << red << "Underlined red" << default << endl;
    cout << foreg << "256 colors" << default << endl;
    cout << backg << "256 colors" << default << endl;

    return 0;
}