#include <iostream>
using namespace std;

struct date
{
    unsigned short day;
    unsigned short month;
    unsigned short year;
};

unsigned int daysoflife(date, date);

int main()
{
    date user;
    date todaysdate;
    cout << "What date were you born? DD MM YYYY\b\b\b\b\b\b\b\b\b\b\b ";
    cin >> user.day;
    cin >> user.month;
    cin >> user.year;

    cout << "Enter with today's date: DD MM YYYY\b\b\b\b\b\b\b\b\b\b\b ";
    cin >> todaysdate.day;
    cin >> todaysdate.month;
    cin >> todaysdate.year;
    cout << "You have lived through " << daysoflife(user, todaysdate) << " days.";

    return 0;
}

unsigned int daysoflife(date user, date todaysdate)
{
    unsigned int daysoflife;
    
    daysoflife = (todaysdate.day + todaysdate.month*31 + 365*todaysdate.year) 
    - (user.day + (user.month*31) + (365*user.year));

    return daysoflife;
}