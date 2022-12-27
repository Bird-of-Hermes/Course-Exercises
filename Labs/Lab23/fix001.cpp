#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("pescado.txt");
    char pescado[80];
    do
    {
        fin.getline(pescado, 80);
        cout << pescado << endl;
    }while(!fin.eof());
    fin.close();
    return 0;
}