#include <iostream>

#define bread 0.3
#define FriedPastry 0.25

using namespace std;

int main()
{
    float num1, num2, total;
    cout << "How many breads do you want?";
    cin >> num1;
    cout << "How many fried pastries do you want?";
    cin >> num2;
    total = bread*num1 + FriedPastry*num2;
    cout << "It amounts to R$ " << total << ".";

    return 0;

}