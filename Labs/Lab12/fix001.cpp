#include <iostream>

struct chocolate
{ 
    char branc[15];
    float weight;
    unsigned short calories;
};

int main()
{
    using namespace std;

    chocolate snack = {"Charge", 2.3f, 350};
    cout << snack.branc << endl;
    cout << snack.calories << endl;
    cout << snack.weight;

    return 0;
}