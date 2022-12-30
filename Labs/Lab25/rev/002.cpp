#include <iostream>
#include <fstream>
using namespace std;

double ExerciseFunction (const double*);

int main()
{
    double WhyDoIExist[32]{}; // your purpose is to be used and discarted
    ExerciseFunction(WhyDoIExist);
}

double ExerciseFunction(const double*)
{
    ifstream RR;
    RR.open("002doubles.txt", ios_base::in | ios_base::binary);
    size_t Counter{};
    double Throwaway, BiggestDouble = 0;
    RR >> Throwaway;
    while(RR.good())
    {
        Counter++;
        RR >> Throwaway;
        if(Throwaway > BiggestDouble)
        BiggestDouble = Throwaway;
    }
    RR.close();
    cout << "File has " << Counter << " numbers, and the biggest one is: "
         << BiggestDouble; 
    return BiggestDouble;
}