#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite três valores (a, b, c): ";
    cin >> a >> b >> c;

    cout << "Valores digitados: " << a << ", " << b << ", " << c << "\n";

    if (a >= b && a >= c) {
        cout << "Maior valor: " << a << "\n";
    } else if (b >= a && b >= c) {
        cout << "Maior valor: " << b << "\n";
    } else {
        cout << "Maior valor: " << c << "\n";
    }

    return 0;
}