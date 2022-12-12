#include <iostream>
#include <cmath>
using namespace std;
double arctan(double x, double y);
double vec(double x, double y);
int main()
{
    cout << "Input X value: ";
    double x, y;
    cin >> x;
    cout << "Input Y value: ";
    cin >> y;
    cout << "Polar coordinates are (" << vec(x, y) << ", " << arctan(y, x)<< ").";
}
double arctan(double x, double y)
{
    double result;
    result = atan2(y, x) * 180 / 3.14159;   
    return result;
}
double vec(double x, double y)
{
    double result;
    result = sqrt((x*x)+(y*y));
    result = sqrt(pow(result,2));    
    return result;
}