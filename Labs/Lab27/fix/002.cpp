#include <iostream>
using namespace std;

double calcular(double a, double b, double (*Some)(double, double));

double Sum(double a, double b){return a+b;}

double Minus(double a, double b) {return a-b;}

int main()
{
    double a, b;
    cout << "A B: ";
    while(cin >> a && cin >> b)
    {
        double q = calcular(a, b, Sum);
        cout << q << endl;
        cout << calcular(a, b, Minus) << endl;
        cout << "A B: ";
    }
}

double calcular(double a, double b, double (*Some)(double, double))
{
    return Some(a, b);
}