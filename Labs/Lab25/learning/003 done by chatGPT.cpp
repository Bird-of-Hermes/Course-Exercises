// will do it later, along with fix004 of lab 24, they are not so simple and error-free of a program
#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // Tamanho máximo do vetor

// Função para localizar a posição correta de um elemento no vetor
int Locate(int vector[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (vector[i] > element)
        {
            return i; // Retorna a posição onde o elemento deve ser inserido
        }
    }
    return size; // Se não achou uma posição, retorna o tamanho atual do vetor
}

// Função para abrir espaço em uma posição do vetor
bool OpenSpace(int vector[], int size, int position)
{
    if (size >= MAX_SIZE)
    {
        return false; // Não é possível abrir espaço, pois o vetor está cheio
    }

    // Desloca os elementos para a próxima posição
    for (int i = size; i > position; i--)
    {
        vector[i] = vector[i - 1];
    }

    return true;
}

int main()
{
    int vector[MAX_SIZE] = {}; // Cria o vetor vazio
    int size = 0; // Variável para armazenar o tamanho atual do vetor

    cout << "Enter 10 values: ";
    for (int i = 0; i < 10; i++)
    {
        int value;
        cin >> value;

        int position = Locate(vector, size, value); // Localiza a posição correta para inserir o elemento

        if (OpenSpace(vector, size, position)) // Abre espaço no vetor
        {
            vector[position] = value; // Insere o elemento na posição correta
            size++; // Atualiza o tamanho do vetor
        }
        else
        {
            cout << "Error: Vector is full" << endl;
        }
    }

    // Exibe os elementos do vetor ordenados
    cout << "Sorted elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}