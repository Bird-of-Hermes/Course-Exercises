#include <iostream>
using namespace std;

struct Candy
{
    char Brand[24];
    double Weight;
    int Calories;
};
// a
void ExerciseA (Candy & Candy, char Char[] = {"Charge"}, double Double = 40.0, int Int = 187);

void ExerciseB(const Candy & Show)
{
    cout << Show.Brand << "\n" << Show.Weight << "\n" << Show.Calories;
}