#include <iostream>
using namespace std;

int main()
{
  char PlayerTeam[25];
  cout << "Enter the name of the player/team: " << endl;
  cin.getline(PlayerTeam, 25);
  int*ptr = new int;  
  for (int i = 0 ; PlayerTeam[i]!='/'; i++)
  {
    *ptr = i+2; // static vector starts at 0, so we have to +1. jump to next letter = +1 -> 1+1=2 
  }
  cout << "The name of the player has " << *ptr-1 << " letters." << endl;
  cout << "His team is ";
  for (size_t i = *ptr; PlayerTeam[i] != '\0'; i++)
  {
    cout << PlayerTeam[i];
  }
  cout << ".";
  delete ptr;
}