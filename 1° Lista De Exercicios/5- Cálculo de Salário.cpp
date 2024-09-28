#include <iostream>

using namespace std;

int main() {
    double salarioPorHora, horasTrabalhadas, salarioBruto, descontoIR, descontoINSS, descontoSindicato, salarioLiquido;

    cout << "Informe o valor que você ganha por hora: ";
    cin >> salarioPorHora;
    cout << "Informe o número de horas trabalhadas no mês: ";
    cin >> horasTrabalhadas;

    salarioBruto = salarioPorHora * horasTrabalhadas;
    descontoIR = salarioBruto * 0.11;
    descontoINSS = salarioBruto * 0.08;
    descontoSindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - descontoIR - descontoINSS - descontoSindicato;

    cout << "a. Salário Bruto: " << salarioBruto << "\n";
    cout << "b. Desconto INSS: " << descontoINSS << "\n";
    cout << "c. Desconto Sindicato: " << descontoSindicato << "\n";
    cout << "d. Salário Líquido: " << salarioLiquido << "\n";

    return 0;
}