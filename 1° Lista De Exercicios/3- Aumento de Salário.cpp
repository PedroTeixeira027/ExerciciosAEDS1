#include <iostream>

using namespace std;

int main() {
    int codigoCargo;
    double salarioAtual, aumento, novoSalario;

    cout << "Informe o c�digo do cargo: ";
    cin >> codigoCargo;
    cout << "Informe o sal�rio atual: ";
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
            aumento = 0; // Diretor n�o tem aumento
            break;
        default:
            cout << "C�digo de cargo inv�lido.\n";
            return 1;
    }

    novoSalario = salarioAtual + aumento;

    cout << "Cargo: " << codigoCargo << "\n";
    cout << "Valor do aumento: " << aumento << "\n";
    cout << "Novo sal�rio: " << novoSalario << "\n";

    return 0;
}