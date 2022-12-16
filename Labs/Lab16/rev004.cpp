#include <iostream>
using namespace std;

struct Player
{
    char Name[20];
    float Salary;
    uint32_t Goals;
};

void Display(Player*, int); // only displays, doesn't reads. For a read function see older exercises.

int main()
{
    cout << "Define the size of the vector: ";
    int VectorSize;
    cin >> VectorSize;
    Player *ptr = new Player[VectorSize];
    Display(ptr, VectorSize);
}

void Display(Player* ptr, int VectorSize)
{
    for (size_t i = 0; i < VectorSize; i++)
    {
        cout << ptr[i].Name << endl;
        cout << ptr[i].Salary << endl;
        cout << ptr[i].Goals << endl;
    }
}