#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um n�mero inteiro maior que 1: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "N�mero inv�lido. O n�mero deve ser maior que 1.\n";
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
        cout << "O n�mero " << numero << " � primo.\n";
    } else {
        cout << "O n�mero " << numero << " n�o � primo.\n";
    }

    return 0;
}