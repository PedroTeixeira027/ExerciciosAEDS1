#include <iostream>

using namespace std;

int main() {
    int codigoAluno;
    double nota1, nota2, nota3, media;

    cout << "Digite o código do aluno: ";
    cin >> codigoAluno;
    cout << "Digite as três notas do aluno: ";
    cin >> nota1 >> nota2 >> nota3;

    // Cálculo da média ponderada
    if (nota1 >= nota2 && nota1 >= nota3) {
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10.0;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10.0;
    } else {
        media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10.0;
    }

    cout << "Código do aluno: " << codigoAluno << "\n";
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << "\n";
    cout << "Média ponderada: " << media << "\n";

    if (media >= 5) {
        cout << "APROVADO\n";
    } else {
        cout << "REPROVADO\n";
    }

    return 0;
}