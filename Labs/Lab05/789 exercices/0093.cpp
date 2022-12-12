#include "0091.h"
#include "0092.h"

using namespace std;

int main()
{
    cout << "Input X value: ";
    double x, y;
    cin >> x;
    cout << "Input Y value: ";
    cin >> y;
    cout << "Polar coordinates are (" << vec(x, y) << ", " << arctan(y, x)<< ").";

    return 0;
}