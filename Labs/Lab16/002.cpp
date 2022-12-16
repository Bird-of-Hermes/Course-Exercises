#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char Words[4][15]{};
  int Strlen[5] = {};   
  for (size_t i = 0; i < 4; i++)
  {
    cout << "Enter word number #" << i+1 << "." << endl;
    cin >> Words[i];
    Strlen[i] = strlen(Words[i]); // catches number of letters in each word
    Strlen[4] = Strlen[4]+Strlen[i]; // Sum of letters in each word
  }
  char *ptr = new char[Strlen[4]+3]{}; // Sum of letters in each word + 3 (spaces for formatting) = char[27]
  for (size_t i = 0; i < (Strlen[4]+3); i++) // i < 28
  {
    strcat(ptr+i, Words[i]); // copies the string to the dynamic allocated memory
    cout << *(ptr+i); // shows the string every character
  }
  delete ptr;
}