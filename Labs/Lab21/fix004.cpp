#include <iostream>
using namespace std;

int main()
{
    int const CED1 = 50, CED2 = 20, CED3 = 10, CED4 = 5;
    cout << "How much do you want to draw? $";
    int DrawAmount, DrawCalc{}, CED1AMOUNT{}, CED2AMOUNT{}, CED3AMOUNT{}, CED4AMOUNT{};
    cin >> DrawAmount;
    DrawCalc = DrawAmount;
    CED1AMOUNT = DrawCalc/CED1;
    CED2AMOUNT = (DrawCalc%CED1)/CED2; 
    CED3AMOUNT = ((DrawCalc%CED1)%CED2)/CED3; 
    CED4AMOUNT = (((DrawCalc%CED1)%CED2)%CED3)/CED4;
    
    cout <<  "ATM" << endl << "---------------------" << endl;
    cout << "Draw Amount: $" <<  DrawAmount << "\n" << endl << "Delivering:\n";
    cout <<  CED1AMOUNT << " banknote(s) of $" << CED1 << endl;
    cout <<  CED2AMOUNT << " banknote(s) of $" << CED2 << endl;
    cout <<  CED3AMOUNT << " banknote(s) of $" << CED3 << endl;
    cout <<  CED4AMOUNT << " banknote(s) of $" << CED4 << endl;
}