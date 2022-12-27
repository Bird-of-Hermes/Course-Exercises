#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("intro.txt");
    if (!fin.is_open())
    {
        cout << "Abertura do arquivo falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    char ch[50]{};
    fin.getline(ch, 50);
    fin.close();
    cout << ch << endl;
    return 0;
}