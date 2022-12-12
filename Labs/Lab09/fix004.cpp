#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;

    double player1bet, player2bet, prizeamount, player1amount, player2amount;
    cout << "Friends bet" << endl << "--------------" << endl;
    cout << "Insert the amount player 1 bet: "      << endl;
    cin >> player1bet;
    cout << "Insert the amount player 2 bet: "      << endl;
    cin >> player2bet;
    cout << "Enter the prize amount: "              << endl;
    cin >> prizeamount;

    player1amount = (prizeamount*player1bet)/(player1bet+player2bet);
    player2amount = (prizeamount*player2bet)/(player1bet+player2bet);
    cout << fixed << setprecision(0);
    cout << "Player 1 will receive $" << player1amount << endl;
    cout << "Player 2 will receive $" << player2amount << endl;

    return 0;
}