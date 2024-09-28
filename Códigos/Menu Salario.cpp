#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  int opcao;
  float salario, novoSalario, valorFerias, decimoTerceiro;
  int mesesTrabalhados;

  do {
    cout << "Menu de Opções:" << endl;
    cout << "1. Calcular novo salário" << endl;
    cout << "2. Calcular valor de férias" << endl;
    cout << "3. Calcular valor do décimo terceiro" << endl;
    cout << "4. Sair do programa" << endl;
    cout << "Digite a opção desejada: ";
    cin >> opcao;

    switch (opcao) {
      case 1:
        cout << "Digite o salário do funcionário: ";
        cin >> salario;
        if (salario <= 210) {
          novoSalario = salario + (salario * 0.15);
        } else if (salario <= 600) {
          novoSalario = salario + (salario * 0.10);
        } else {
          novoSalario = salario + (salario * 0.05);
        }
        cout << "Novo salário: " << novoSalario << endl;
        break;
      case 2:
        cout << "Digite o salário do funcionário: ";
        cin >> salario;
        valorFerias = salario + (salario / 3);
        cout << "Valor de férias: " << valorFerias << endl;
        break;
      case 3:
        cout << "Digite o salário do funcionário: ";
        cin >> salario;
        cout << "Digite o número de meses trabalhados (até 12): ";
        cin >> mesesTrabalhados;
        decimoTerceiro = (salario * mesesTrabalhados) / 12;
        cout << "Valor do décimo terceiro: " << decimoTerceiro << endl;
        break;
      case 4:
        cout << "Programa encerrado." << endl;
        break;
      default:
        cout << "Opção inválida." << endl;
        break;
    }
  } while (opcao != 4);

  return 0;
}