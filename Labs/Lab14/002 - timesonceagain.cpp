#include <iostream>
using namespace std;

struct Time
{
    uint8_t hours;
    uint8_t minutes;
};

void ReadTime(Time*);
void DisplayTime(Time*);

int main()
{
    Time now, *ptr = &now;
    cout << "What time is it? HH MM\b\b\b\b\b";
    ReadTime(&now);
    DisplayTime(&now);
}

void ReadTime(Time*ptr)
{
    short hours,minutes;
    cin >> hours >> minutes;
    ptr->hours = hours;
    ptr->minutes = minutes;
}

void DisplayTime(Time*ptr)
{
    ptr->hours = ptr->hours + 1;
    if(ptr->hours = 24)
    {
        ptr->hours = 0;
    }
    cout << "Your watch is running late, the correct time is " 
         << int(ptr->hours) << ":" << int(ptr->minutes);
}