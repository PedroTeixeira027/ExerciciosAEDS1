#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite dois valores (a, b): ";
    cin >> a >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "S�o m�ltiplos.\n";
    } else {
        cout << "N�o s�o m�ltiplos.\n";
    }

    return 0;
}