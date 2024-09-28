#include <iostream>

using namespace std;

int main() {
    int codigoAluno;
    double nota1, nota2, nota3, media;

    cout << "Digite o c�digo do aluno: ";
    cin >> codigoAluno;
    cout << "Digite as tr�s notas do aluno: ";
    cin >> nota1 >> nota2 >> nota3;

    // C�lculo da m�dia ponderada
    if (nota1 >= nota2 && nota1 >= nota3) {
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10.0;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10.0;
    } else {
        media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10.0;
    }

    cout << "C�digo do aluno: " << codigoAluno << "\n";
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << "\n";
    cout << "M�dia ponderada: " << media << "\n";

    if (media >= 5) {
        cout << "APROVADO\n";
    } else {
        cout << "REPROVADO\n";
    }

    return 0;
}