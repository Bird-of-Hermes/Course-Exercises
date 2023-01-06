// poorly written exercise, every uppercase comment it is I that made
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct String
{
    char * str; // ponteiro para O VETOR DE CARACTERES
    int comp; // comprimento dO VETOR DE CARACTERES (sem contar '\0')
};

void Ajustar(String & Text, char * Text1);
void Mostrar(String &, int Repeat = 1);
void Mostrar(const char *, int Repeat = 1);

int main()
{
    String msg;
    char teste[] = "Realidade de ponteiros e strings\n";
    Ajustar(msg, teste); // primeiro argumento é uma referência
    // aloca espaço para guardar cópia de teste EM UM MEMBRO DO STRUCT STRING E ajusta o membro str de msg para apontar para novo bloco
    // copia teste para o novo bloco
    Mostrar(msg); // mostra o membro String uma vez
    Mostrar(msg, 2); // mostra o membro String duas vezes
    teste[0] = 'D';
    teste[1] = 'u';
    Mostrar(teste); // mostra a string uma vez
    Mostrar(teste, 3); // mostra a string três vezes 
    Mostrar("Pronto!");
    delete[] msg.str; // DELETA O POINTEIRO ALOCADO NA FUNÇÃO AJUSTAR
    return 0;
}

void Ajustar(String& Text, char * Text1)
{
    Text.comp = strlen(Text1);
	Text.str = new char[Text.comp+1];
	strcpy(Text.str, Text1);
}

void Mostrar (String & Text, int Repeat)
{
    for (int i = 0; i < Repeat; i++)
    {
        cout << Text.str << endl;
    }
}

void Mostrar (const char * A, int Repeat)
{
    for (int i = 0; i < Repeat; i++)
    {
        cout << A << endl;
    }
}