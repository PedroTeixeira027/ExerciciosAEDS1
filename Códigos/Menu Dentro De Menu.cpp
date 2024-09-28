#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  int opcaoPrincipal, opcaoSubmenu;

  do {
    cout << "Menu Principal:" << endl;
    cout << "1. Op��o 1" << endl;
    cout << "2. Op��o 2" << endl;
    cout << "3. Submenu" << endl;
    cout << "4. Sair" << endl;
    cout << "Digite a op��o desejada: ";
    cin >> opcaoPrincipal;

    switch (opcaoPrincipal) {
      case 1:
        cout << "Op��o 1 selecionada." << endl;
        // C�digo para a op��o 1
        break;
      case 2:
        cout << "Op��o 2 selecionada." << endl;
        // C�digo para a op��o 2
        break;
      case 3:
        do {
          cout << "Submenu:" << endl;
          cout << "1. Subop��o 1" << endl;
          cout << "2. Subop��o 2" << endl;
          cout << "3. Voltar" << endl;
          cout << "Digite a subop��o desejada: ";
          cin >> opcaoSubmenu;

          switch (opcaoSubmenu) {
            case 1:
              cout << "Subop��o 1 selecionada." << endl;
              // C�digo para a subop��o 1
              break;
            case 2:
              cout << "Subop��o 2 selecionada." << endl;
              // C�digo para a subop��o 2
              break;
            case 3:
              cout << "Voltando ao menu principal." << endl;
              break;
            default:
              cout << "Subop��o inv�lida." << endl;
              break;
          }
        } while (opcaoSubmenu != 3);
        break;
      case 4:
        cout << "Saindo do programa." << endl;
        break;
      default:
        cout << "Op��o inv�lida." << endl;
        break;
    }
  } while (opcaoPrincipal != 4);

  return 0;
}