#include <iostream>

using namespace std;

int main() {
    char sexo, resposta;
    int countSim = 0, countNao = 0, countMulheresSim = 0, countHomens = 0, countHomensNao = 0;

    for (int i = 1; i <= 10; ++i) {
        cout << "Digite o sexo do entrevistado " << i << " (M/F): ";
        cin >> sexo;
        cout << "Digite a resposta do entrevistado " << i << " (S —sim; ou N —não): ";
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

    cout << "a) Número de pessoas que responderam sim: " << countSim << " pessoas\n";
    cout << "b) Número de pessoas que responderam não: " << countNao << " pessoas\n";
    cout << "c) Número de mulheres que responderam sim: " << countMulheresSim << " mulheres\n";

    if (countHomens > 0) {
        double percentagemHomensNao = (static_cast<double>(countHomensNao) / countHomens) * 100;
        cout << "d) Percentagem de homens que responderam não: " << percentagemHomensNao << "%\n";
    } else {
        cout << "d) Nenhum homem respondeu não.\n";
    }

    return 0;
}