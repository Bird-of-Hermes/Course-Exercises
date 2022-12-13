#include <iostream>
using namespace std;

struct ddate
{
    unsigned short dday;
    unsigned short dmonth;
    unsigned short dyear;
};

struct ttime
{
    unsigned short thour;
    unsigned short tminutes;
    unsigned short tseconds;
};

struct event
{
    char eplace[60];
    ddate edate;
    ttime etime;
};

void storedata(event);

int main()
{
    event eevent;
    storedata(eevent);
}

void storedata(event arg)
{
    cout << "--Describe the event--" << "\nWhere it happened? ";
    cin.getline(arg.eplace, 60);
    cout << "What year was it? ";
    cin  >> arg.edate.dyear;
    cout << "What month of "<< arg.edate.dyear << " was it? (only numbers): ";
    cin  >> arg.edate.dmonth;
    cout << "It happened in " << arg.edate.dyear << ", month " << arg.edate.dmonth 
         << " and what day was it? (only numbers): ";
    cin  >> arg.edate.dday;
    cout << "Enter the time it happened" << "\nHours: ";
    cin >> arg.etime.thour;
    cout << "Minutes: ";
    cin >> arg.etime.tminutes;
    cout << "Seconds: ";
    cin >> arg.etime.tseconds;
    cout << "The event was recorded in the memory.";
}

// could make it work with names of months also but that's out of the scope of the exercise.