#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Número par. ";
    } else {
        cout << "Número ímpar. ";
    }

    if (numero > 0) {
        cout << "Número positivo.\n";
    } else if (numero < 0) {
        cout << "Número negativo.\n";
    } else {
        cout << "Número zero.\n";
    }

    return 0;
}