#include <iostream>

using namespace std;

int main() {
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;

    for (int i = 1; i <= 8; ++i) {
        cout << "Digite a idade da pessoa " << i << ": ";
        cin >> idade;

        if (idade <= 15) {
            faixa1++;
        } else if (idade <= 30) {
            faixa2++;
        } else if (idade <= 45) {
            faixa3++;
        } else if (idade <= 60) {
            faixa4++;
        } else {
            faixa5++;
        }
    }

    int totalPessoas = faixa1 + faixa2 + faixa3 + faixa4 + faixa5;

    cout << "a) Quantidade de pessoas em cada faixa etária:\n";
    cout << "Faixa 1 (até 15 anos): " << faixa1 << " pessoas\n";
    cout << "Faixa 2 (16 a 30 anos): " << faixa2 << " pessoas\n";
    cout << "Faixa 3 (31 a 45 anos): " << faixa3 << " pessoas\n";
    cout << "Faixa 4 (46 a 60 anos): " << faixa4 << " pessoas\n";
    cout << "Faixa 5 (acima de 60 anos): " << faixa5 << " pessoas\n";

    cout << "b) Porcentagem de pessoas na primeira faixa com relação ao total de pessoas: ";
    cout << (static_cast<double>(faixa1) / totalPessoas) * 100 << "%\n";

    cout << "c) Porcentagem de pessoas na última faixa com relação ao total de pessoas: ";
    cout << (static_cast<double>(faixa5) / totalPessoas) * 100 << "%\n";

    return 0;
}