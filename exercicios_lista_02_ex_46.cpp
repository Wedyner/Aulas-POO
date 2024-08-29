// 46. Escreva um programa que calcule o fatorial de um 
// número inteiro fornecido pelo usuário. 
// Exemplo: 5!= 5 x 4 x 3 x 2 × 1 = 120.

#include <iostream>

using namespace std;

int main() {
    int numero;
    long long fatorial = 1;

    // Solicita a entrada do número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Verifica se o número é válido (não negativo)
    if (numero < 0) {
        cout << "Erro: numero nao pode ser negativo." << endl;
        return 1;
    }

    // Calcula o fatorial
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    // Exibe o resultado
    cout << "Fatorial de " << numero << ": " << fatorial << endl;

    return 0;
}