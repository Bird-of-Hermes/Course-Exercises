#include <iostream>
using namespace std;

enum weekdays {MON, TUE, WED, THU, FRI, SAT, SUN};

int main()
{

char daysinaweek[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

for (weekdays ind = MON; ind <= SUN; ind = weekdays(ind + 1))
    cout << daysinaweek[ind] << endl;

return 0;
}