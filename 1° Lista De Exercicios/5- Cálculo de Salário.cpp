#include <iostream>

using namespace std;

int main() {
    double salarioPorHora, horasTrabalhadas, salarioBruto, descontoIR, descontoINSS, descontoSindicato, salarioLiquido;

    cout << "Informe o valor que voc� ganha por hora: ";
    cin >> salarioPorHora;
    cout << "Informe o n�mero de horas trabalhadas no m�s: ";
    cin >> horasTrabalhadas;

    salarioBruto = salarioPorHora * horasTrabalhadas;
    descontoIR = salarioBruto * 0.11;
    descontoINSS = salarioBruto * 0.08;
    descontoSindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - descontoIR - descontoINSS - descontoSindicato;

    cout << "a. Sal�rio Bruto: " << salarioBruto << "\n";
    cout << "b. Desconto INSS: " << descontoINSS << "\n";
    cout << "c. Desconto Sindicato: " << descontoSindicato << "\n";
    cout << "d. Sal�rio L�quido: " << salarioLiquido << "\n";

    return 0;
}