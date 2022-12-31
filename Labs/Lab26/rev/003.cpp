#include <iostream>
using namespace std;

struct Candidate
{
    char Name[30];
    int Scores[3];
};

void Content(Candidate const arg) // a)
{
    std::cout << arg.Name << "\n";
    std::cout << arg.Scores << endl;
}

void Content1(Candidate const  &arg) // b)
{
    cout << *arg.Name << endl;
    cout << *arg.Scores << endl;
}

void Content2(Candidate const * arg, int ArgSize) // c)
{
   for (size_t i = 0; i < ArgSize; i++)
   {
        cout << arg[i].Name << endl;
        cout << arg[i].Scores << endl;
   }   
}

// d) Yes, but they're fundamentally the same kind (addresses)