#include <iostream>

using namespace std;

int main() {
    int opcao;
    
    do {
        cout << "Menu de Opções:\n";
        cout << "1 - Somar dois números\n";
        cout << "2 - Raiz Quadrada de um número\n";
        cout << "0 - Sair\n";
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                // Implemente a soma de dois números aqui
                break;
            case 2:
                // Implemente o cálculo da raiz quadrada aqui
                break;
            case 0:
                cout << "Programa encerrado.\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 0);

    return 0;
}