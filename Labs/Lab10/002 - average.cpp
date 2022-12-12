#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int OldWeight[3] = {2,3,4};
    float Scores[3] = {};
    float averageP; // <-- I'll try and adopt this syntax
    cout << "Enter the scores: ";
    cin >> Scores[0] >> Scores[1] >> Scores[2];
    averageP = (OldWeight[0]*Scores[0]+OldWeight[1]*Scores[1]+OldWeight[2]*Scores[2])/9;
    cout << "This student partial average is " << fixed << setprecision(2) << averageP;
    // setting precision to 2 makes it look nicer

    return 0;
}