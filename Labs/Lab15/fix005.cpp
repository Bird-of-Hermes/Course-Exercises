#include <iostream>
using namespace std;

// data types

enum SubjectStatus {APPR=1,LOCK,FAIL};

struct Student
{
    union
    {
        char Name[60];
        int RegNumber;
    }ID;
    uint32_t SubjectID;
    SubjectStatus SubjectSituation; 
};

// prototypes

void Read(Student*);
void Display(Student*);

// main function

int main()
{
    int StudentNum;
    cout << "Enter with the number of Students: ";
    cin >> StudentNum;
    Student *ptr = new Student[StudentNum]; // allocating dynamic memory
    
    Read(ptr);
    Display(ptr);
    delete ptr; // deleting dynamic memory

    return 0;
}

// functions

void Read(Student*ptr)
{
    // For an IRL application, a while/for loop would allow many functionalities

    bool Answer;
    cout << "1 to enter Name or 0 to enter the Registration Number: ";
    cin >> Answer;
    if (Answer == true)
    {
        cout << "Enter his/her name: ";
        cin.get();
        cin.getline(ptr[0].ID.Name, 60);
    }
    else
    {
        cout << "Enter his/her Registration Number: ";
        cin >> ptr[0].ID.RegNumber;
    }
    
    cout << "Subject ID: ";
    cin >> ptr[0].SubjectID;
    cout << "Subject Situation (1 for Approved, 2 for Locked, 3 for Failed): ";
    int Receive; 
    cin >> Receive;
    switch (Receive)
    {
    case 1:
        ptr[0].SubjectSituation = APPR;
        break;
    case 2:
        ptr[0].SubjectSituation = LOCK;
        break;
    case 3:
        ptr[0].SubjectSituation = FAIL;
        break;
    default:
        break;
    }
}

void Display(Student*ptr)
{
    cout << "\n--------------------\n" << endl;
    // to access other positions do a "ptr = ptr+(position);" and DO NOT forget to prt = (ptr-position) later
    cout << "Student: " << ptr->ID.Name << ".\nID: " << ptr->ID.RegNumber << endl;
    cout << "Subject ID: " << ptr->SubjectID << endl;
    
    // Ideally, SubjectSituation would be best coupled with a string to allow output scalability.
    // since the exercise is requiring only 1 output, that won't be needed.
    switch (ptr->SubjectSituation)
    {
    case 1:
        cout << "Subject situation: Approved" << endl;
        break;
    case 2:
        cout << "Subject situation: Locked" << endl;
        break;
    case 3:
        cout << "Subject situation: Failed" << endl;
        break;
    default:
        break;
    }
    cout << "\n--------------------\n" << endl;
}