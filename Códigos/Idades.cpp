#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
  setlocale(LC_ALL, "portuguese");
  int ano;
  int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;

  for (int i = 1; i <= 5; i++) {
    cout << "Digite o ano de nascimento da pessoa " << i << ": ";
    cin >> ano;

    if (ano <= 2008) {
      faixa1++;
    }  else if (ano >= 2007 && ano <=2006) {
      faixa2++;
    } else if (ano >= 2005 && ano <=1964) {
      faixa3++;
    } else if (ano >= 1963) {
      faixa4++;
    } 
  }
  
  cout << "Quantidade de pessoas em cada faixa etária:" << endl;
  cout << "Não Podem Votar (até 15 anos): " << faixa1 << " pessoas" << endl;
  cout << "Não Obrigatório Votar (16 a 17 anos): " << faixa2 << " pessoas" << endl;
  cout << "Obrigatório votar (18 a 59 anos): " << faixa3 << " pessoas" << endl;
  cout << "Não Obrigatório (acima 60 anos): " << faixa4 << " pessoas" << endl;


  return 0;
}