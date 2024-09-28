#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int opcao;
    double salario, novoSalario, valorFerias, decimoTerceiro;
    int mesesTrabalhados;

    do {
        cout << "\nMenu de op��es:\n";
        cout << "1. Novo sal�rio\n";
        cout << "2. F�rias\n";
        cout << "3. D�cimo terceiro\n";
        cout << "4. Sair\n";
        cout << "Digite a op��o desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o sal�rio do funcion�rio: R$";
                cin >> salario;

                if (salario <= 210.00) {
                    novoSalario = salario * 1.15;
                } else if (salario <= 600.00) {
                    novoSalario = salario * 1.10;
                } else {
                    novoSalario = salario * 1.05;
                }

                cout << fixed << setprecision(2);
                cout << "Novo sal�rio: R$" << novoSalario << "\n";
                break;

            case 2:
                cout << "Digite o sal�rio do funcion�rio: R$";
                cin >> salario;

                valorFerias = salario + (salario / 3);

                cout << fixed << setprecision(2);
                cout << "Valor de f�rias: R$" << valorFerias << "\n";
                break;

            case 3:
                cout << "Digite o sal�rio do funcion�rio: R$";
                cin >> salario;
                cout << "Digite o n�mero de meses de trabalho (at� 12): ";
                cin >> mesesTrabalhados;

                decimoTerceiro = salario * mesesTrabalhados / 12;

                cout << fixed << setprecision(2);
                cout << "Valor do d�cimo terceiro: R$" << decimoTerceiro << "\n";
                break;

            case 4:
                cout << "Programa encerrado.\n";
                break;

            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}