#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
  float num1, num2, num3;
  
  cout << "Digite o primeiro n�mero: ";
  cin >> num1;
  
  cout << "Digite o segundo n�mero: ";
  cin >> num2;
  
  cout << "Digite o terceiro n�mero: ";
  cin >> num3;
  
  float media = (num1 + num2 + num3) / 3;
  
  cout << "A m�dia dos n�meros �: " << media << endl;
  
  return 0;
}