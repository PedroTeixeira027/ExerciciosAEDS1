#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  float num1, num2, num3;
  
  cout << "Digite o primeiro número: ";
  cin >> num1;
  
  cout << "Digite o segundo número: ";
  cin >> num2;
  
  cout << "Digite o terceiro número: ";
  cin >> num3;
  
  float media = (num1 + num2 + num3) / 3;
  
  cout << "A média dos números é: " << media << endl;
  
  return 0;
}