#include <iostream>
using namespace std;

int main()
{
    int Matrix[5][5]
    {{38,17,23,41,65},{51,65,23,39,19},
    {50,25,64,19,12},{56,62,45,68,22},{98,54,92,87,13}};
    float Avg{};
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            Avg = Avg + float(Matrix[i][j]);
        }
    }
    Avg = Avg/25;
    cout << "Average = " << Avg;
}