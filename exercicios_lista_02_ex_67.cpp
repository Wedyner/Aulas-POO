// 67. O Departamento Municipal de Meteorologia lhe contratou para desenvolver 
// um programa que leia um conjunto indeterminado de temperaturas. Em seguida, 
// o programa deve informar os valores da menor e da maior temperatura, 
// além do valor da temperatura média.

// Inclusão da biblioteca iostream para entrada e saída de dados
#include <iostream>

// Função principal do programa
int main() {
  // Declaração de variáveis
  double temperatura; // Variável para armazenar a temperatura lida
  double soma = 0; // Variável para armazenar a soma das temperaturas
  double menor = 1000; // Variável para armazenar a menor temperatura (inicializada com um valor alto)
  double maior = -1000; // Variável para armazenar a maior temperatura (inicializada com um valor baixo)
  int cont = 0; // Variável para armazenar o número de temperaturas lidas

  // Loop para ler as temperaturas
  while (true) {
    // Solicitação da temperatura ao usuário
    std::cout << "Digite uma temperatura (ou -999 para sair): ";
    std::cin >> temperatura;

    // Verificação se o usuário deseja sair
    if (temperatura == -999) {
      // Sai do loop
      break;
    }

    // Adiciona a temperatura à soma
    soma += temperatura;
    // Incrementa o contador de temperaturas
    cont++;

    // Verificação se a temperatura é menor que a menor temperatura atual
    if (temperatura < menor) {
      // Atualiza a menor temperatura
      menor = temperatura;
    }

    // Verificação se a temperatura é maior que a maior temperatura atual
    if (temperatura > maior) {
      // Atualiza a maior temperatura
      maior = temperatura;
    }
  }

  // Verificação se nenhuma temperatura foi lida
  if (cont == 0) {
    // Imprime uma mensagem informando que nenhuma temperatura foi lida
    std::cout << "Nenhuma temperatura foi digitada." << std::endl;
  } else {
    // Calcula a temperatura média
    double media = soma / cont;
    // Imprime os resultados
    std::cout << "Menor temperatura: " << menor << std::endl;
    std::cout << "Maior temperatura: " << maior << std::endl;
    std::cout << "Temperatura media: " << media << std::endl;
  }

  // Retorna 0 para indicar que o programa foi executado com sucesso
  return 0;
}