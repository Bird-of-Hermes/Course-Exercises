#include <iostream>
using namespace std;
struct bankaccount
{
    unsigned int identifier;
    char name[60];
    double balance;
};

void showbankaccount(bankaccount);

int main()
{
    bankaccount exercise = {};
    
    cout << "Enter with your account data.\nName: ";
    cin.getline(exercise.name, 60);
    cout << "Enter your SSN:\n";    // equivalent of CPF in Brazil
    cin >> exercise.identifier;
    showbankaccount(exercise);
    cout << "How much are you depositing?\n";
    cin >> exercise.balance;

    return 0;
}

void showbankaccount(bankaccount user)
{
    cout << user.name << endl;
    cout << user.identifier << endl;
    cout << user.balance << endl;
}