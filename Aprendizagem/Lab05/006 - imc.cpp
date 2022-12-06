#include <iostream>

using namespace std;

float bmi(float kgs, float meters);

int main()
{
    float meters, kgs;
    cout << "Body Mass Index (BMI)\n ---------------------\n";
    cout << "Height: ";
    cin >> meters;
    cout << "Mass: ";
    cin >> kgs;
    cout << "BMI is: " << bmi(kgs, meters);
}

float bmi(float kgs, float meters)
{
    float bmi = kgs/(meters*meters);
    return bmi;
}