#include <iostream>
#include <cmath>
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