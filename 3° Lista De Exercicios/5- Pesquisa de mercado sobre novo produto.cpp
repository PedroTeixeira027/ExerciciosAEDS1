#include <iostream>

using namespace std;

int main() {
    char sexo, resposta;
    int countSim = 0, countNao = 0, countMulheresSim = 0, countHomens = 0, countHomensNao = 0;

    for (int i = 1; i <= 10; ++i) {
        cout << "Digite o sexo do entrevistado " << i << " (M/F): ";
        cin >> sexo;
        cout << "Digite a resposta do entrevistado " << i << " (S �sim; ou N �n�o): ";
        cin >> resposta;

        if (resposta == 'S' || resposta == 's') {
            countSim++;

            if (sexo == 'F' || sexo == 'f') {
                countMulheresSim++;
            }
        } else if (resposta == 'N' || resposta == 'n') {
            countNao++;

            if (sexo == 'M' || sexo == 'm') {
                countHomens++;
            }
        }
    }

    cout << "a) N�mero de pessoas que responderam sim: " << countSim << " pessoas\n";
    cout << "b) N�mero de pessoas que responderam n�o: " << countNao << " pessoas\n";
    cout << "c) N�mero de mulheres que responderam sim: " << countMulheresSim << " mulheres\n";

    if (countHomens > 0) {
        double percentagemHomensNao = (static_cast<double>(countHomensNao) / countHomens) * 100;
        cout << "d) Percentagem de homens que responderam n�o: " << percentagemHomensNao << "%\n";
    } else {
        cout << "d) Nenhum homem respondeu n�o.\n";
    }

    return 0;
}