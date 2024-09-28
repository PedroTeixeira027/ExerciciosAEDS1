#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  int opcaoPrincipal, opcaoSubmenu;

  do {
    cout << "Menu Principal:" << endl;
    cout << "1. Opção 1" << endl;
    cout << "2. Opção 2" << endl;
    cout << "3. Submenu" << endl;
    cout << "4. Sair" << endl;
    cout << "Digite a opção desejada: ";
    cin >> opcaoPrincipal;

    switch (opcaoPrincipal) {
      case 1:
        cout << "Opção 1 selecionada." << endl;
        // Código para a opção 1
        break;
      case 2:
        cout << "Opção 2 selecionada." << endl;
        // Código para a opção 2
        break;
      case 3:
        do {
          cout << "Submenu:" << endl;
          cout << "1. Subopção 1" << endl;
          cout << "2. Subopção 2" << endl;
          cout << "3. Voltar" << endl;
          cout << "Digite a subopção desejada: ";
          cin >> opcaoSubmenu;

          switch (opcaoSubmenu) {
            case 1:
              cout << "Subopção 1 selecionada." << endl;
              // Código para a subopção 1
              break;
            case 2:
              cout << "Subopção 2 selecionada." << endl;
              // Código para a subopção 2
              break;
            case 3:
              cout << "Voltando ao menu principal." << endl;
              break;
            default:
              cout << "Subopção inválida." << endl;
              break;
          }
        } while (opcaoSubmenu != 3);
        break;
      case 4:
        cout << "Saindo do programa." << endl;
        break;
      default:
        cout << "Opção inválida." << endl;
        break;
    }
  } while (opcaoPrincipal != 4);

  return 0;
}