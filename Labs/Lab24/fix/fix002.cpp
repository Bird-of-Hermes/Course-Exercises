#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("vet.dat", ios_base::out | ios_base::binary);
    if(!fout.is_open())
    {
        cerr << "Error opening the file. OFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }
    int Num;
    size_t i = 0;
    fout.write((char*)&i, sizeof(i)); // Assigning header as 0
    cout << "Enter with integer numbers (0 to stop)" << endl;
    cin >> Num;
    for (i; Num != 0; i++)
    {
        fout.write((char*)&Num, sizeof(Num));
        cin >> Num;
    }
    fout.seekp(0, ios_base::beg); // moves to the beginning of the file
    fout.write((char*)&i, sizeof(i)); // rewrites the first bits with the correct info
    fout.close();
    cout << i << " numbers were stored in vet.dat";
    return 0;
}