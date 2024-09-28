#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  int opcao;
  float salario, novoSalario, valorFerias, decimoTerceiro;
  int mesesTrabalhados;

  do {
    cout << "Menu de Op��es:" << endl;
    cout << "1. Calcular novo sal�rio" << endl;
    cout << "2. Calcular valor de f�rias" << endl;
    cout << "3. Calcular valor do d�cimo terceiro" << endl;
    cout << "4. Sair do programa" << endl;
    cout << "Digite a op��o desejada: ";
    cin >> opcao;

    switch (opcao) {
      case 1:
        cout << "Digite o sal�rio do funcion�rio: ";
        cin >> salario;
        if (salario <= 210) {
          novoSalario = salario + (salario * 0.15);
        } else if (salario <= 600) {
          novoSalario = salario + (salario * 0.10);
        } else {
          novoSalario = salario + (salario * 0.05);
        }
        cout << "Novo sal�rio: " << novoSalario << endl;
        break;
      case 2:
        cout << "Digite o sal�rio do funcion�rio: ";
        cin >> salario;
        valorFerias = salario + (salario / 3);
        cout << "Valor de f�rias: " << valorFerias << endl;
        break;
      case 3:
        cout << "Digite o sal�rio do funcion�rio: ";
        cin >> salario;
        cout << "Digite o n�mero de meses trabalhados (at� 12): ";
        cin >> mesesTrabalhados;
        decimoTerceiro = (salario * mesesTrabalhados) / 12;
        cout << "Valor do d�cimo terceiro: " << decimoTerceiro << endl;
        break;
      case 4:
        cout << "Programa encerrado." << endl;
        break;
      default:
        cout << "Op��o inv�lida." << endl;
        break;
    }
  } while (opcao != 4);

  return 0;
}