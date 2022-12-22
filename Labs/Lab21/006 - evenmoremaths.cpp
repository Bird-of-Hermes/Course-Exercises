#include <iostream>
using namespace std;

int main()
{
  int Range;
  cout << "What range? ";
  cin >> Range;
  uint64_t Num = 2;
  while (true)
  {
    bool divisor = true;
    for (uint64_t i = 2; i <= Range; i++)
    {
      if(Num % i != 0)
      {
        divisor = false;
        break;
      }
    }
    if (divisor)
    {
      cout << Num;
      break;
    }
    
  Num++;
  }
  return 0;
}