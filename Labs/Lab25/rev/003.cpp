#include <iostream>
#include <fstream>
using namespace std;

void FillingTheGaps(int, int[], int[]);

int main()
{
    // making the file for the exercise because I'm using VS Code, not VS.
    int32_t Integer = 457;
    ofstream Binary;
    Binary.open("003binaryinteger.bin", ios_base::out | ios_base::binary);
    Binary.write((char*)&Integer, sizeof(int32_t));
    Binary.close();
    // starting the real exercise
    int32_t Integer2;
    ifstream RInteger;
    RInteger.open("003binaryinteger.bin", ios_base::in | ios_base::binary);
    RInteger.read((char*)&Integer2, sizeof(int32_t));
    RInteger.close();

    int32_t FillingTheGaaps[20]{};
    FillingTheGaps(Integer2, FillingTheGaaps+7, FillingTheGaaps+17);

    cout << "Filling the gaps: ";
    for (size_t i = 0; i < 20; i++)
    {
        cout << FillingTheGaaps[i] << endl;
    }
    

}

void FillingTheGaps(int Filling, int The[], int Gaps[])
{
    for (; The < Gaps; The++)
        *The = Filling;
}