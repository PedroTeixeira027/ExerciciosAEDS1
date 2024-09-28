#include <iostream>

using namespace std;

int main() {
    double altura, pesoIdeal;
    char sexo;

    cout << "Informe a altura (em metros): ";
    cin >> altura;
    cout << "Informe o sexo (M/F): ";
    cin >> sexo;

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        cout << "Sexo inválido.\n";
        return 1;
    }

    cout << "O peso ideal é: " << pesoIdeal << " kg\n";

    return 0;
}