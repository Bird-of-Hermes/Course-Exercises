#include <iostream>

using namespace std;

float bmiF(float height, float mass);
double bmiD(double height, double mass);

int main()
{
    bmiF(1.75f, 80.0f);
    bmiD(1.75, 80.0);
}

float bmiF(float height, float mass)
{
    float bmi = mass/(height*height);
    cout.setf(ios::fixed);
    cout.precision(10);
    cout << bmi << endl;
    return 0;
}

double bmiD(double height,double mass)
{
    double bmi;
    bmi = mass/(height*height);
    cout.setf(ios::fixed);
    cout.precision(10);
    cout << bmi;
    return 0;
}

// b) Float-type precision reaches 6 digits only, while double-type precision reaches as far as 15.
// c) No, the float-type function rounds up from the 7th digit and beyond.
// d) I'd still use the float-type one because BMI is not the type of data that needs that precision,
// so it would save memory.