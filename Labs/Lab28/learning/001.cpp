#include <iostream>
using namespace std;

void RoundTiming(float x)
{
    static float Timing = 0;
    Timing += x;
    cout << "Total: " << Timing << endl;
}

int main()
{
    float TimePLap;
    cout << "Lap Time: ";
    while(cin>>TimePLap){
    RoundTiming(TimePLap);
    cout << "\nLap Time: ";}
    
    return 0;
}