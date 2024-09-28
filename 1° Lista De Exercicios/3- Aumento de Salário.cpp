#include <iostream>

using namespace std;

int main() {
    int codigoCargo;
    double salarioAtual, aumento, novoSalario;

    cout << "Informe o código do cargo: ";
    cin >> codigoCargo;
    cout << "Informe o salário atual: ";
    cin >> salarioAtual;

    switch (codigoCargo) {
        case 1:
            aumento = salarioAtual * 0.5;
            break;
        case 2:
            aumento = salarioAtual * 0.35;
            break;
        case 3:
            aumento = salarioAtual * 0.2;
            break;
        case 4:
            aumento = salarioAtual * 0.1;
            break;
        case 5:
            aumento = 0; // Diretor não tem aumento
            break;
        default:
            cout << "Código de cargo inválido.\n";
            return 1;
    }

    novoSalario = salarioAtual + aumento;

    cout << "Cargo: " << codigoCargo << "\n";
    cout << "Valor do aumento: " << aumento << "\n";
    cout << "Novo salário: " << novoSalario << "\n";

    return 0;
}