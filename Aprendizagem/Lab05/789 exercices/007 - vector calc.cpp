#include <iostream>
#include <cmath>
using namespace std;
double vec(double x, double y);
int main()
{
    cout << "Input X value: ";
    double x, y;
    cin >> x;
    cout << "Input Y value: ";
    cin >> y;
    cout << "Vector size is: " << vec(x, y);
}
double vec(double x, double y)
{
    double result;
    result = sqrt((x*x)+(y*y));
    result = sqrt(pow(result,2));    
    return result;
}