#include <iostream>

using namespace std;

int main() {
    int opcao;
    
    do {
        cout << "Menu de Op��es:\n";
        cout << "1 - Somar dois n�meros\n";
        cout << "2 - Raiz Quadrada de um n�mero\n";
        cout << "0 - Sair\n";
        cout << "Digite a op��o desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                // Implemente a soma de dois n�meros aqui
                break;
            case 2:
                // Implemente o c�lculo da raiz quadrada aqui
                break;
            case 0:
                cout << "Programa encerrado.\n";
                break;
            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
        }

    } while (opcao != 0);

    return 0;
}