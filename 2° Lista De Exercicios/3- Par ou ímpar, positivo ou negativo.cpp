#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "N�mero par. ";
    } else {
        cout << "N�mero �mpar. ";
    }

    if (numero > 0) {
        cout << "N�mero positivo.\n";
    } else if (numero < 0) {
        cout << "N�mero negativo.\n";
    } else {
        cout << "N�mero zero.\n";
    }

    return 0;
}