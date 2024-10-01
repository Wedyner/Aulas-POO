
// 92. Escreva um programa que utilize uma função para exibir o seguinte padrão: 
//
// * * * * * * * * *
//   * * * * * * * 
//     * * * * * 
//       * * *
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * * 

#include <iostream> // Biblioteca para entrada e saída de dados

using namespace std; // Utilizar o namespace std para evitar prefixos

// Função para exibir o padrão
void exibirPadrao(int tamanho) {
    // Loop para exibir as linhas do padrão decrescente
    for (int i = tamanho; i > 0; i--) {
        // Loop para exibir os espaços antes do asterisco
        for (int j = 0; j < tamanho - i; j++) {
            cout << "  "; // Exibir dois espaços
        }

        // Loop para exibir os asteriscos
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "* "; // Exibir um asterisco seguido de um espaço
        }

        cout << endl; // Pular para a próxima linha
    }

    // Loop para exibir as linhas do padrão crescente
    for (int i = 1; i <= tamanho; i++) {
        // Loop para exibir os espaços antes do asterisco
        for (int j = 0; j < tamanho - i; j++) {
            cout << "  "; // Exibir dois espaços
        }

        // Loop para exibir os asteriscos
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "* "; // Exibir um asterisco seguido de um espaço
        }

        cout << endl; // Pular para a próxima linha
    }
}

int main() {
    // Chamar a função para exibir o padrão
    exibirPadrao(5);

    return 0;
}