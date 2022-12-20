#include <iostream>
using namespace std;

const uint16_t Lessons = 66;

struct Student
{
    float Score1;
    float Score2;
    float Score3;
    float Score4{};
    uint16_t Absences;
};

int main()
{
    Student User;
    float Average{};
    cout << "Enter the grades and absences in the course: ";
    cout << "Score 1: ";
    cin >> User.Score1;
    cout << "Score 2: ";
    cin >> User.Score2;
    cout << "Score 3: ";
    cin >> User.Score3;
    Average = (User.Score1 + User.Score2 + User.Score3)/3.0;
    cout << "Attendance: ";
    cin >> User.Absences;
    if (User.Absences < 50)
    {
        cout << "Disapproved.";
        return 0;
    }
    else if (Average >= 7)
    {
        cout << "Approved";
        return 0;
    }
    else
    cout << "4th Test" << endl;
    cout << "Score 4: ";
    cin >> User.Score4;
    if ((Average + User.Score4)/2 <= 6)
    {
        cout << "Disapproved.";
        return 0;
    }
    else
        cout << "Approved.";

    return 0; 
}