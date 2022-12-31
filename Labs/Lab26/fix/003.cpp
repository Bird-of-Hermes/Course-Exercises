#include <iostream>
using namespace std;

const int TAM_NOME = 30;

struct aluno
{
    char nome[TAM_NOME];
    int nivel;
};
// solicita e armazena informações de alunos:
// - encerrando ao preencher o vetor ou quando o usuário
// entrar com uma linha em branco para o nome do aluno
// - a função retorna o número de alunos lidos
int PegarInfo(aluno va[], int n);
// mostra o conteúdo de um registro aluno
void Mostrar1(aluno a);
// mostra o conteúdo do registro aluno apontado
void Mostrar2(const aluno * pa);
// mostra o conteúdo do vetor de alunos
void Mostrar3(const aluno va[], int n);

int main()
{
    cout << "Tamanho da classe: ";
    int tam;
    cin >> tam;
    // remove \n para uso do cin.getline
    cin.ignore();
    aluno * ptr = new aluno[tam];
    int inscritos = PegarInfo(ptr, tam);
    for (int i = 0; i < inscritos; ++i)
    {
    Mostrar1(ptr[i]);
    Mostrar2(&ptr[i]);
    }
    Mostrar3(ptr, inscritos);
    delete[] ptr;
    cout << "Feito!\n";
    return 0; 
}

int PegarInfo(aluno va[], int n)
{
    cout << "Enter with student's info";
    int Counter = 0;
    for(size_t i = 0; i < n; i++)
    {
        cout << "\nName: ";
        cin.getline(va[i].nome, TAM_NOME);
        if(va[i].nome[0] == ' ')
            break;
        cout << "level: ";
        cin >> va[i].nivel;
        cin.ignore();
        Counter++;
    }
    return Counter;
}

void Mostrar1(aluno a)
{
    cout << "\n-----------------\nName: " << a.nome
         << "\nLevel: " << a.nivel << endl;
}

void Mostrar2(const aluno * pa)
{
    cout << "\n-----------------\nName: " << pa->nome
         << "\nLevel: " << pa->nivel << endl;
}

void Mostrar3(const aluno va[], int n)
{
    cout << "Showing everything\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << "Name: " << va[i].nome
         << "\nLevel: " << va[i].nivel << endl;
    }
}