#include <iostream>
using namespace std;

const int ARSize = 2;

double calcular(double a, double b, double (*Some)(double, double));
double Sum(double a, double b){return a+b;}
double Minus(double a, double b) {return a-b;}

int main()
{
    double a, b, q;
    const char * FName[ARSize] = { "Sum", "Minus" };
	double (*Array[ARSize]) (double, double) = { Sum, Minus};
    for (size_t i = 0; i < ARSize; i++)
    {
        cout << "A B: "; cin >> a >> b;
        q = calcular(a, b, Array[i]);
        cout << FName[i] << ": " << q << endl;
    }
}

double calcular(double a, double b, double (*Some)(double, double))
{
    return Some(a, b);
}