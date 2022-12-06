//For same day travel, as explicited.

#include <iostream>

using namespace std;

int main()
{
    int departure1, departure2, arrival1, arrival2, total1, total2;
    cout << "Time of departure (HH MM): ";
    cin >> departure1 >> departure2;
    cout << "Time of arrival (HH MM): ";
    cin >> arrival1 >> arrival2;

    total1 = arrival1 - departure1;
    total2 = arrival2 - departure2;

    if (0 > total2)
    {
        total1 = total1 - 1;
        total2 = total2 * - 1;
    }

    cout << "\nThe total time spent traveling was " << total1 << ":" << total2 << endl;

    return 0;
}