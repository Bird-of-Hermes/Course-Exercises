#include <iostream>
using namespace std;
struct bankaccount
{
    unsigned int identifier;
    char name[60];
    double balance;
};

int main()
{
    bankaccount exercise = {};
    
    cout << "Enter with your account data.\nName: ";
    cin.getline(exercise.name, 60);
    cout << "Enter your SSN:\n";    // equivalent of CPF in Brazil
    cin >> exercise.identifier;
    cout << exercise.name << "\n" 
         << exercise.identifier << "\n"
         << exercise.balance << endl;
    cout << "How much are you depositing?\n";
    cin >> exercise.balance;

    return 0;
}