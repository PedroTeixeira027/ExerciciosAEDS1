#include <iostream>
using namespace std;

int main() {
  int opcao;
  
  do {
    cout << "Menu de Opções:" << endl;
    cout << "1. Calcular média aritmética" << endl;
    cout << "2. Calcular média ponderada" << endl;
    cout << "3. Sair do programa" << endl;
    cout << "Digite a opção desejada: ";
    cin >> opcao;
    
    switch (opcao) {
      case 1: {
        float nota1, nota2;
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        
        float media = (nota1 + nota2) / 2;
        cout << "A média aritmética é: " << media << endl;
        break;
      }
      case 2: {
        float nota1, nota2, nota3;
        float peso1, peso2, peso3;
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite o peso da primeira nota: ";
        cin >> peso1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        cout << "Digite o peso da segunda nota: ";
        cin >> peso2;
        cout << "Digite a terceira nota: ";
        cin >> nota3;
        cout << "Digite o peso da terceira nota: ";
        cin >> peso3;
        
        float mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
        cout << "A média ponderada é: " << mediaPonderada << endl;
        break;
      }
      case 3:
        cout << "Programa encerrado." << endl;
        break;
      default:
        cout << "Opção inválida. Digite um número válido." << endl;
        break;
    }
    
    cout << endl;
  } while (opcao != 3);

  return 0;
}