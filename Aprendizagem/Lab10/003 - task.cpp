#include <iostream>

using namespace std;

double randomassignment(double, double, double); // prototype

int main()
{
    double vector[3] = {};
    cout << "Enter with the desired values: ";
    cin >> vector[0] >> vector[1] >> vector[2];
    cout << randomassignment(vector[0],vector[1],vector[2]);
    return 0;
}

double randomassignment(double vector0, double vector1, double vector2)
{
    double result = vector0*(vector2-vector1);
    return result;
}