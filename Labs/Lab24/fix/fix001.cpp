#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int IntegerValue{};
    ifstream RInteger; 
    RInteger.open("integer.bin", ios_base::in | ios_base::binary);
    if(RInteger.is_open())
    {
        RInteger.read((char*)&IntegerValue, sizeof(int));
        cout << "File found!\nIt contains the number: " << IntegerValue << "\n" << endl;
    }
    RInteger.close();
    cout << "Integer value: ";
    cin >> IntegerValue;
    ofstream WInteger;
    WInteger.open("integer.bin", ios_base::out | ios_base::binary);
    if(!WInteger.is_open())
    {
        cerr << "Error OFSTREAM";
        exit(1);
    }
    WInteger.write((char*)&IntegerValue, sizeof(IntegerValue));
    WInteger.close();
    cout << "Integer stored in the file" << endl;
    system("PAUSE");
    return 0;
}