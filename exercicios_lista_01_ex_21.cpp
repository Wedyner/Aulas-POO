// 21. Escreva um programa que pergunte em que turno o usuário estuda.  Peça para 
// digitar M para Matutino, V para Vespertino ou N para Noturno. Em seguida, 
// imprima a mensagem “Bom Dia!”, “Boa Tarde!”, “Boa Noite!”  ou “Valor Inválido!”, 
// de acordo com a entrada do usuário.

#include <iostream>

using namespace std;

int main() {
    char turno;

    // Pergunta em que turno o usuário estuda
    cout << "Em que turno você estuda? (M, V ou N): ";
    cin >> turno;

    // Verifica a entrada do usuário e imprime a mensagem correspondente
    switch (turno) {
        case 'M':
        case 'm':
            cout << "Bom Dia!" << endl;
            break;
        case 'V':
        case 'v':
            cout << "Boa Tarde!" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Boa Noite!" << endl;
            break;
        default:
            cout << "Valor Invalido!" << endl;
            break;
    }

    return 0;
}