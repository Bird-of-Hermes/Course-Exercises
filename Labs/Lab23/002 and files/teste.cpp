#include <iostream>
#include <fstream>

using namespace std;

// Declaração da função
void lerArquivo(ifstream& arquivo);

int main() {
  // Abre o arquivo para leitura
  ifstream arquivo("meu_arquivo.txt");

  // Verifica se o arquivo foi aberto com sucesso
  if (!arquivo.is_open()) {
    cerr << "Erro ao abrir o arquivo!" << endl;
    return 1;
  }

  // Chama a função passando o arquivo como referência
  lerArquivo(arquivo);

  // Fecha o arquivo
  arquivo.close();

  return 0;
}

// Implementação da função
void lerArquivo(ifstream& arquivo) {
  // Lê uma palavra do arquivo e armazena na variável palavra
  char palavra[20];
  while (arquivo >> palavra) {
    cout << palavra << endl;
  }
}
