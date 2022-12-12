#include <iostream>
using namespace std;

void riddle(unsigned char ch, int x);

int main()
{
    riddle(60, 20);
    riddle(90, 7);
    riddle(72, 40);
    riddle(48, 53);
    riddle(107, 1);

    return 0;
}

void riddle(unsigned char ch, int x)
{
    char riddle = ch+x;
    cout << riddle;
}