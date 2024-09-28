#include <iostream>

using namespace std;

int main() {
    int idade;
    double altura, somaAlturas = 0;
    int countPessoasMaisDe50 = 0;

    cout << "Digite a idade da pessoa (ou idade menor ou igual a zero para encerrar): ";
    cin >> idade;

    while (idade > 0) {
        cout << "Digite a altura da pessoa: ";
        cin >> altura;

        if (idade > 50) {
            somaAlturas += altura;
            countPessoasMaisDe50++;
        }

        cout << "Digite a idade da próxima pessoa (ou idade menor ou igual a zero para encerrar): ";
        cin >> idade;
    }

    if (countPessoasMaisDe50 > 0) {
        double mediaAlturasMaisDe50 = somaAlturas / countPessoasMaisDe50;
        cout << "Média das alturas das pessoas com mais de 50 anos: " << mediaAlturasMaisDe50 << " metros\n";
    } else {
        cout << "Não há pessoas com mais de 50 anos para calcular a média das alturas.\n";
    }

    return 0;
}