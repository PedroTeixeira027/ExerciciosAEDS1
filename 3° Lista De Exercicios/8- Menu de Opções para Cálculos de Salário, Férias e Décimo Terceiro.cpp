#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int opcao;
    double salario, novoSalario, valorFerias, decimoTerceiro;
    int mesesTrabalhados;

    do {
        cout << "\nMenu de opções:\n";
        cout << "1. Novo salário\n";
        cout << "2. Férias\n";
        cout << "3. Décimo terceiro\n";
        cout << "4. Sair\n";
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o salário do funcionário: R$";
                cin >> salario;

                if (salario <= 210.00) {
                    novoSalario = salario * 1.15;
                } else if (salario <= 600.00) {
                    novoSalario = salario * 1.10;
                } else {
                    novoSalario = salario * 1.05;
                }

                cout << fixed << setprecision(2);
                cout << "Novo salário: R$" << novoSalario << "\n";
                break;

            case 2:
                cout << "Digite o salário do funcionário: R$";
                cin >> salario;

                valorFerias = salario + (salario / 3);

                cout << fixed << setprecision(2);
                cout << "Valor de férias: R$" << valorFerias << "\n";
                break;

            case 3:
                cout << "Digite o salário do funcionário: R$";
                cin >> salario;
                cout << "Digite o número de meses de trabalho (até 12): ";
                cin >> mesesTrabalhados;

                decimoTerceiro = salario * mesesTrabalhados / 12;

                cout << fixed << setprecision(2);
                cout << "Valor do décimo terceiro: R$" << decimoTerceiro << "\n";
                break;

            case 4:
                cout << "Programa encerrado.\n";
                break;

            default:
                cout << "Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}