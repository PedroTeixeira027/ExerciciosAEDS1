#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite dois valores (a, b): ";
    cin >> a >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "São múltiplos.\n";
    } else {
        cout << "Não são múltiplos.\n";
    }

    return 0;
}