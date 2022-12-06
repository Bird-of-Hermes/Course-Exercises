#include <iostream>

using namespace std;

float adjustment(float a);

int main()
{
    cout << "Salary right now: ";
    float salary;
    cin >> salary;
    cout << "Adjusted salary is: " << adjustment(salary);
}

float adjustment(float a)
{
    a = 1.15*a;
    return a;
}