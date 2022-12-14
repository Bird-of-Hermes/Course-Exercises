#include <iostream>
using namespace std;

// Could also use strings for accurate time description. I.e. 08:00. Using integers is 
// problematic for displaying time since it won't output the zeros of a single digit number.

struct times
    {
        unsigned short hour;
        unsigned short minute;
    };

struct dates
    {
        unsigned short day;
        unsigned short month;
        int year;
    };
struct events
{
    dates dates;
    times time;
    char briefdescription[19];
};

int main()
{
    events party[10];
    cout << "Enter with 2 events: ";

    for (size_t i = 0; i < 2; i++)
    {
        cout << "\n#" << i+1 <<"\nDate: DD MM YYYY\b\b\b\b\b\b\b\b\b\b";
        cin  >> party[i].dates.day >> party[i].dates.month >> party[i].dates.year;
        cout << "Hour: HH MM\b\b\b\b\b";
        cin  >> party[i].time.hour >> party[i].time.minute;
        cout << "Brief description: ";
        cin.ignore();
        cin.getline(party[i].briefdescription, 19);
    }
    cout << "------------------------------" << endl;
    cout << "Recorded events" << endl;
    for (size_t i = 0; i < 2; i++)
    {
        cout << party[i].dates.day << "/" << party[i].dates.month << "/" << party[i].dates.year
             << " " << party[i].time.hour << ":" << party[i].time.minute 
             << " " << party[i].briefdescription << endl;
    }
    
return 0;
}