#include <iostream>
#include <cmath>

// escreva uma funcao que resolva ax²+bx+c

using namespace std;

void bhaskara(double arg1, double arg2, double arg3);

int main()
{
    double a, b, c;
    cout << "Solving for ax^2 + bx + c" << endl << "Enter a, b and c: ";
    cin >> a >> b >> c;
    bhaskara(a,b,c);
    return 0;
}

void bhaskara(double arg1, double arg2, double arg3)
{
    float delta = arg2*arg2 - 4*arg1*arg3;
    float result1, result2;
    result1 = (-arg2+sqrt((arg2*arg2)-4*arg1*arg3))/(2*arg1);
    result2 = (-arg2-sqrt((arg2*arg2)-4*arg1*arg3))/(2*arg1);
    if(delta > 0)
    {
        cout << "Delta is: " << delta << endl;
        cout << "Solution 1: " << result1 << "\n" << "Solution 2: " << result2 << endl;
    }
    if(delta < 0)
    {
        cout << "Delta is: " << delta << endl;
        cout << "There isn't a real solution.";
    }
    if(delta == 0)
    {
        cout << "Delta equals 0 and \n";
        cout << result1 << endl;
    }
}