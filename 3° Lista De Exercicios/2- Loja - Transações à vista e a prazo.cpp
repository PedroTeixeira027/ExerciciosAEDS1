#include <iostream>

using namespace std;

int main() {
    char codigo;
    double valor, totalVista = 0, totalPrazo = 0;

    for (int i = 1; i <= 15; ++i) {
        cout << "Digite o código (V para à vista, P para a prazo) da transação " << i << ": ";
        cin >> codigo;
        cout << "Digite o valor da transação: ";
        cin >> valor;

        if (codigo == 'V' || codigo == 'v') {
            totalVista += valor;
        } else if (codigo == 'P' || codigo == 'p') {
            totalPrazo += valor;

            if (i == 1) {
                // Calcula o valor da primeira prestação para compras a prazo
                double primeiraPrestacao = valor / 3;
                cout << "d) Valor da primeira prestação das compras a prazo: " << primeiraPrestacao << "\n";
            }
        }
    }

    double totalCompras = totalVista + totalPrazo;

    cout << "a) Valor total das compras à vista: " << totalVista << "\n";
    cout << "b) Valor total das compras a prazo: " << totalPrazo << "\n";
    cout << "c) Valor total das compras efetuadas: " << totalCompras << "\n";

    return 0;
}