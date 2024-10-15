// esvreva um programa que receba um coonjunto de valores inteiros.
// em seguida, exida um grafico de barras horizontais, simulando o histograma
// referente os valores que foram informados. o programa deve exibir 
// o resultado conforme o exemplo abaixo:
//
//informe os dados: 3 5 2 1
//
//dados [3, 5, 2, 1]
//
//* total de linhas: 4
//* total de colunas: 5
// 
//histograma horizontal
// 1| * * *
// 2| * * * * *
// 3| * * 
// 4| * 
//  + - - - - -
//  0 1 2 3 4 5

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void exibirHistograma(const vector<int>& valores) {
    int linhas = valores.size();
    int colunas = *max_element(valores.begin(), valores.end());

    cout << "\n* Total de linhas: " << linhas << "\n";
    cout << "* Total de colunas: " << colunas << "\n\n";
    cout << "Histograma horizontal\n";

    for (int i = 0; i < linhas; ++i) {
        cout << i + 1 << "| ";
        for (int j = 0; j < valores[i]; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }

    
    cout << " + ";
    for (int i = 0; i <= colunas; ++i) {
        cout << "- ";
    }
    cout << "\n ";

    
    for (int i = 0; i <= colunas; ++i) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> valores;
    int valor;

    cout << "Informe os dados (valores inteiros separados por espaco, termine com um caractere nao numerico):\n";

    
    while (cin >> valor) {
        valores.push_back(valor);
    }

    
    cin.clear();
    cin.ignore();

    
    cout << "\nDados: [";
    for (size_t i = 0; i < valores.size(); ++i) {
        cout << valores[i];
        if (i < valores.size() - 1) cout << ", ";
    }
    cout << "]\n";

    
    exibirHistograma(valores);

    return 0;
}
