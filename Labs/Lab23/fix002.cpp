#include <iostream>
#include <fstream>
using namespace std;

// structs
struct Student
{
    char Name[20];
    float Scores[3];
    short Situation;
};
// prototypes
void Read(Student[], ifstream &, int);
void Write(Student[], ofstream &, int);

int main()
{
    ifstream fin;
    fin.open("students.txt");
    if(!fin.is_open())
    {
        cout << "Failed to open file #IFSTREAM";
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open("Ssituation.txt");
    if(!fout.is_open())
    {
        cout << "Failed to open file #OFSTREAM";
        exit(EXIT_FAILURE);
    }
    cout << "How many students are you going to compute? ";
    int NumStudents{};
    cin >> NumStudents;
    Student NewFile[NumStudents];
    Student *NewFilePointer = NewFile;
    //
    Read(NewFilePointer, fin, NumStudents);
    Write(NewFilePointer, fout, NumStudents);
    //
    fin.close();
    fout.close();
    return 0;
}

void Read(Student R[], ifstream &fin,int NumS)
{
    for (size_t i = 0; i < NumS; i++)
    {
        fin >> R[i].Name;
        fin >> R[i].Scores[0];
        fin >> R[i].Scores[1];
        fin >> R[i].Scores[2];
    }
}
void Write(Student W[], ofstream &fout, int NumS)
{
    int Situation[NumS];
    for(size_t i = 0; i < NumS; i++)
    {
    Situation[NumS] = (W[i].Scores[0] + W[i].Scores[1] + (W[i].Scores[2])*2)/4;
    if (Situation[NumS] >= 7)
        fout << W[i].Name << "\tApproved" << endl;
    else if (Situation[NumS] <= 3)
        fout << W[i].Name << "\tReproved" << endl;
    else
        fout << W[i].Name << "\tTo finals" << endl;
    }
}