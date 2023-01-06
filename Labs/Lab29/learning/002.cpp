#include <iostream>
using namespace std;

void Print(int A){cout << "\033[33m" << A << "\033[0m";} // Indigo
void Print(double A){cout << "\033[36m" << A << "\033[0m";;}; // Cyan
void Print(const char* A){cout << "\033[31m" << A << "\033[0m";;}; // Red

int main()
{
    cout << "Inteiro: ";
    Print(45);
    cout << "\nPonto-flutuante: ";
    Print(3.9);
    cout << "\nString: ";
    Print("Oi Mundo");
    cout << "\n";
}