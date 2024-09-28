#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro maior que 1: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "Número inválido. O número deve ser maior que 1.\n";
        return 1;
    }

    bool primo = true;

    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            primo = false;
            break;
        }
    }

    if (primo) {
        cout << "O número " << numero << " é primo.\n";
    } else {
        cout << "O número " << numero << " não é primo.\n";
    }

    return 0;
}