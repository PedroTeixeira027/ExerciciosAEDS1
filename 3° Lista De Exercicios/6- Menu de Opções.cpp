#include <iostream>

using namespace std;

int main() {
    int opcao;
    double nota1, nota2, nota3, peso1, peso2, peso3;

    do {
        cout << "Menu de Op��es:\n";
        cout << "1. M�dia aritm�tica\n";
        cout << "2. M�dia ponderada\n";
        cout << "3. Sair\n";
        cout << "Digite a op��o desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite duas notas: ";
                cin >> nota1 >> nota2;
                cout << "M�dia aritm�tica: " << (nota1 + nota2) / 2 << "\n";
                break;
            case 2:
                cout << "Digite tr�s notas: ";
                cin >> nota1 >> nota2 >> nota3;
                cout << "Digite os pesos das notas: ";
                cin >> peso1 >> peso2 >> peso3;
                cout << "M�dia ponderada: " << (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3) << "\n";
                break;
            case 3:
                cout << "Programa encerrado.\n";
                break;
            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
        }

    } while (opcao != 3);

    return 0;
}