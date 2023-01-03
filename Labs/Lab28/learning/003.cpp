#include <iostream>
#include <fstream>
using namespace std;

struct Pair { int x; int y;};

ostream & operator<<(ostream& os , Pair y)
{
    os << " [" << y.x << "," << y.y << "]";
    return os;
}

int main()
{
    Pair OneTwo;
    ifstream RR;
    RR.open("files.txt");
    if(!RR.is_open())
    {
        cerr << "Error opening file";
        exit(1);
    }
    
    int num; 
    RR >> num; // sees the first number of the text file (that determines) the number of times type Pair
               // is repeated, for more information check out the comments at the end
    cout << "Pairs:";
    for(size_t i = 0; i < num; i++)
    {
        RR >> OneTwo.x >> OneTwo.y;
        cout << OneTwo;
    }
    RR.close();
    
    return 0;
}

// I tried 'while(RR.good())' and 'while(!RR.eof())' (+ both at the same time '&&') but it always repeats the 
// OneTwo cout once after it fails so I modified the file to work like a binary file, adding a number at  
// the beginning the number of times the Pair type repeats to determine how long the 'For' loops