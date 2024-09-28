#include <iostream>

using namespace std;

int main() {
    int idade, pessoasAcima50 = 0, pessoasEntre10e20 = 0;
    double altura, peso, somaAlturas = 0;
    int totalPessoas = 5; // Número de pessoas a serem analisadas

    for (int i = 1; i <= totalPessoas; ++i) {
        cout << "Digite a idade da pessoa " << i << ": ";
        cin >> idade;

        if (idade > 50) {
            pessoasAcima50++;
        }

        cout << "Digite a altura da pessoa " << i << ": ";
        cin >> altura;

        if (idade >= 10 && idade <= 20) {
            pessoasEntre10e20++;
            somaAlturas += altura;
        }

        cout << "Digite o peso da pessoa " << i << ": ";
        cin >> peso;

        if (peso < 40) {
            double percentagemPesoInferior40 = (static_cast<double>(i) / totalPessoas) * 100;
            cout << "c) Porcentagem de pessoas com peso inferior a 40 kg: " << percentagemPesoInferior40 << "%\n";
        }
    }

    cout << "a) Quantidade de pessoas com idade superior a 50 anos: " << pessoasAcima50 << " pessoas\n";

    if (pessoasEntre10e20 > 0) {
        double mediaAlturas = somaAlturas / pessoasEntre10e20;
        cout << "b) Média das alturas das pessoas com idade entre 10 e 20 anos: " << mediaAlturas << " metros\n";
    } else {
        cout << "b) Não há pessoas com idade entre 10 e 20 anos.\n";
    }

    return 0;
}