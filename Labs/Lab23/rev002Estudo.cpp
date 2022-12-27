#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("sol.txt"); // abre arquivo para leitura
    if (!fin.is_open()) // se o arquivo não estiver aberto para leitura
    {
        cout << "Abertura do arquivo sol.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout; 
    fout.open("num.txt"); // abre arquivo para escrita
    if (!fout.is_open()) // se o arquivo não estiver aberto para escrita
    {
        cout << "Abertura do arquivo num.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    // -----------------------
    int num{};
    char ch;
    fin >> num; // leitura necessária para que a verificação do fin.eof seguinte aconteça
    while(!fin.eof()) // enquanto nao chegar no fim do arquivo
    {
        if (fin.good()) // se a leitura do fin anterior foi bem-sucedida
        {
            fout << num; // escreva 'num' no arquivo
            fout << "\n"; // escreva \n no arquivo
        }
        else // se a leitura do fin anterior foi mal-sucedida
        {
            fin.clear(); // limpe o buffer
            fin >> ch; // copie o caractere que está no arquivo para ch, ande para o próximo caractere
        }
        fin >> num; // copie o caractere que está no arquivo para o ch (leitura falha se não for int)
    }
    // -----------------------
    fin.close(); // para de ler o arquivo
    fout.close(); // para de escrever no arquivo
    cout << "Pronto!" << endl;
    return 0;
}