#include <iostream>
using namespace std;

int main()
{
    uint16_t Speed[10]{};
    size_t Counter{}, Psum{};
    size_t const Limit = 80;
    uint32_t Penalty{};
    cout << "Enter with the speed of the last 10 registered cars." << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cin >> Speed[i];
        if (Speed[i]>Limit)
        {
            Counter++;
            Penalty = 8*(Speed[i]-Limit);
            cout << Speed[i] << " km/h exceeds the limit = penalized in $" << Penalty << endl;
            Psum = Psum+Penalty;
        }
    }
    cout << Counter << " cars were penalized for a total of $" << Psum;
    return 0;
}