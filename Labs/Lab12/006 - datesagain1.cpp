#include <iostream>
using namespace std;

// CHECK 006 - junkcode.txt to see other lines of code developed during this exercise

struct ttime
{
    unsigned short thour;
    unsigned short tminutes;
};

struct subtracao
{
    ttime minuteshours;
    unsigned short simphours;
    unsigned short simpminutes;
};

// prototypes
void program(); // main program
void display(const ttime, const ttime); // Does the maths and outputs the difference
ttime read(ttime); // stores the values

int main()
{
    program();

    return 0;
}

void program() // Is what main() calls
{
    ttime PclassB;
    ttime PclassE;
    cout << "Beginning: HH MM\b\b\b\b\b";
    PclassB = read(PclassB);
    cout << "Ending: HH MM\b\b\b\b\b";
    PclassE = read(PclassE);
    display(PclassE,PclassB);
}

void display(const ttime Ending, const ttime Beginning)
{
    short minutes, hours1 = Ending.thour, minutes1, hours; // necessary for std::cout

    if (hours1 < Beginning.thour) // checks if the Ending and Beginning hours
                                  // are in between days
    {
        hours1 = hours1 + 24;     // and fixes it for calculation
    }
    minutes = (hours1 - Beginning.thour)*60; // translates the difference of hours into minutes
    minutes = minutes + (Ending.tminutes - Beginning.tminutes); // above + difference in minutes

    hours = minutes/60;
    minutes1 = minutes%60;

    // output
    cout << "Between " << Beginning.thour << ":" << Beginning.tminutes << " and " 
         << Ending.thour << ":" << Ending.tminutes << " there are " << minutes 
         << " minutes, that is, " << hours << " hours and " << minutes1 << " minutes." << endl;
}

ttime read(ttime arg)
{
    cin >> arg.thour;
    cin >> arg.tminutes;
    return arg;
}