#include <iostream>
using namespace std;

struct date
{
    unsigned short day;
    unsigned short month;
    unsigned short year;
};

istream & operator>>(istream& , date&);     // read
ostream & operator<<(ostream& , date);      // display
unsigned int operator-(date, date);         // allows operator '-' to be used in between date class

int main()
{
    date user;
    date todaysdate;
    cout << "What date were you born? DD MM YYYY\b\b\b\b\b\b\b\b\b\b\b ";
    cin >> user;

    cout << "Enter with today's date: DD MM YYYY\b\b\b\b\b\b\b\b\b\b\b ";
    cin >> todaysdate;

    cout << todaysdate << endl;
    cout << user << endl;
    cout << todaysdate-user;
    return 0;
}

unsigned int operator-(date todaysdate, date user)    // rev002
{
    unsigned int result;
    result = (user.day + (user.month*31) + (user.year*365)) -
    (todaysdate.day + (todaysdate.month*31) + (todaysdate.year*365));
    
    return result;
}

istream & operator>>(istream& is, date& c) // rev002 cin
{
    is >> c.day;
    is >> c.month;
    is >> c.year;
 
    return is;
}

ostream & operator<<(ostream& os, date c)  // rev002 cout
{
    os << c.day;
    os << c.month;
    os << c.year;
    return os;
}

