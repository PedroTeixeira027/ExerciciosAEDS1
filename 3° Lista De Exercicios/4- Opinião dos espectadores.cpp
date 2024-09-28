#include <iostream>

using namespace std;

int main() {
    int idade, opiniao, somaIdadesOtimo = 0, countOtimo = 0, countRegular = 0, countBom = 0;

    for (int i = 1; i <= 15; ++i) {
        cout << "Digite a idade do espectador " << i << ": ";
        cin >> idade;
        cout << "Digite a opinião do espectador " << i << " (ótimo=3, bom=2, regular=1): ";
        cin >> opiniao;

        if (opiniao == 3) {
            somaIdadesOtimo += idade;
            countOtimo++;
        } else if (opiniao == 1) {
            countRegular++;
        } else if (opiniao == 2) {
            countBom++;
        }
    }

    if (countOtimo > 0) {
        double mediaIdadesOtimo = static_cast<double>(somaIdadesOtimo) / countOtimo;
        cout << "a) Média das idades das pessoas que responderam ótimo: " << mediaIdadesOtimo << "\n";
    } else {
        cout << "a) Nenhuma pessoa respondeu ótimo.\n";
    }

    cout << "b) Quantidade de pessoas que responderam regular: " << countRegular << " pessoas\n";

    if (countBom > 0) {
        double percentagemBom = (static_cast<double>(countBom) / 15) * 100;
        cout << "c) Percentagem de pessoas que responderam bom: " << percentagemBom << "%\n";
    } else {
        cout << "c) Nenhuma pessoa respondeu bom.\n";
    }

    return 0;
}