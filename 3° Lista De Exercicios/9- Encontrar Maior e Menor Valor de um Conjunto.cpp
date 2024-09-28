#include <iostream>

using namespace std;

int main() {
    int valor;
    int maior = INT_MIN; // Valor inicial como o menor inteiro possível
    int menor = INT_MAX; // Valor inicial como o maior inteiro possível

    cout << "Digite um conjunto de valores inteiros e positivos (encerre com 0):\n";

    do {
        cout << "Digite um valor: ";
        cin >> valor;

        if (valor < 0) {
            cout << "Valor negativo. Por favor, digite um valor positivo.\n";
        } else if (valor > 0) {
            if (valor > maior) {
                maior = valor;
            }

            if (valor < menor) {
                menor = valor;
            }
        }

    } while (valor != 0);

    if (maior != INT_MIN && menor != INT_MAX) {
        cout << "Maior valor do conjunto: " << maior << "\n";
        cout << "Menor valor do conjunto: " << menor << "\n";
    } else {
        cout << "Nenhum valor válido foi inserido.\n";
    }

    return 0;
}