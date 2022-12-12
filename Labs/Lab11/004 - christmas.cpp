#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char comemorativedate1[15], comemorativedate2[15], comemorativedate3[15], Christmas[10] = {"Christmas"};
    cout << "What are your favorite comemorative dates?\n";
    cin.getline(comemorativedate1,15);
    cin.getline(comemorativedate2,15);
    cin.getline(comemorativedate3,15);
    cout << comemorativedate1 << ", " << comemorativedate2 << " and " << comemorativedate3
         << " are beautiful celebrations!" << endl;
    
    if((strcmp(comemorativedate1, Christmas) == 0) || (strcmp(comemorativedate2, Christmas) == 0) || (strcmp(comemorativedate3, Christmas) == 0))
    {
        cout << "Christmas is also my one of my favourite celebrations!\n";
    }

    return 0;
}

// spent like 5+ hours before I came across strcmp, this is what I developed in the mean time......
// it checks everything and makes sure that both the last digit and the one before are in sync before line 39
// because sometimes even junk memory ends up giving a valid input for line 39 and ends up executing cout
// now, before every program I make, I'll make sure to check what the libraries contain instead of googling
// for answers

//   for (int i = 0; i < 10; i++)
//    {
//        if(((comemorativedate1[i] == Christmas[i]) || (comemorativedate2[i] == Christmas[i]) ||
//           (comemorativedate3[i] == Christmas[i])) && ((comemorativedate1[i-1] == Christmas[i-1]) ||
//           (comemorativedate2[i-1] == Christmas[i-1]) ||
//           (comemorativedate3[i-1] == Christmas[i-1])))
//          {          
//           if(i == 9)
//             {
//              cout << "Christmas is also my one of my favourite celebrations!\n";
//             }
//          }
//   }