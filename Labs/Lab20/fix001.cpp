#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int Raffle = rand() % 11;
    int x{12};
    cout << "Raffling a number between 0~10!!" << endl;
    cout << "The number has been drawn!! Guess it to leave the loop!" << endl;
    while (x!=Raffle)
    {
        cin >> x;
    }
    cout << x << " is the raffled number!! You guessed it correctly!";
    return 0;
}