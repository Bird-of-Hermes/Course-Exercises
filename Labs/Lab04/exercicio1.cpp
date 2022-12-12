#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    float Px, Qx, Py, Qy;
    float D;
    cout << "Digite Px e Py " << endl;
    cin >> Px >> Py;
    cout << "Qx e Qy \n";
    cin >> Qx >> Qy;
    D  = sqrt(pow(Qx-Px, 2) + pow(Qy - Py, 2));
    
    
    cout << " A distância é igual a: " << D;
   
    return 0;
}