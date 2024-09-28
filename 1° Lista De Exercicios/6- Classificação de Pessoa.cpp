#include <iostream>

using namespace std;

int main() {
    double altura, peso;
    char classificacao;

    cout << "Informe a altura (em metros): ";
    cin >> altura;
    cout << "Informe o peso (em kg): ";
    cin >> peso;

    if (altura <= 1.20) {
        if (peso <= 60) {
            classificacao = 'A';
        } else if (peso <= 90) {
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    } else if (altura <= 1.70) {
        if (peso <= 60) {
            classificacao = 'B';
        } else if (peso <= 90) {
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    } else {
        if (peso <= 60) {
            classificacao = 'C';
        } else if (peso <= 90) {
            classificacao = 'F';
        } else {
            classificacao = 'I';
        }
    }

    cout << "Classificação: " << classificacao << "\n";

    return 0;
}