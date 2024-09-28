#include <iostream>
using namespace std;

int main() {
  int totalPessoas = 10;
  int pessoasSim = 0;
  int pessoasNao = 0;
  int mulheresSim = 0;
  int homensNao = 0;
  int totalHomens = 0;

  char sexo, resposta;

  for (int i = 1; i <= totalPessoas; i++) {
    cout << "Digite o sexo do entrevistado (M/F): ";
    cin >> sexo;

    cout << "Digite a resposta do entrevistado (S/N): ";
    cin >> resposta;

    if (resposta == 'S') {
      pessoasSim++;

      if (sexo == 'F') {
        mulheresSim++;
      }
    } else if (resposta == 'N') {
      pessoasNao++;

      if (sexo == 'M') {
        homensNao++;
        totalHomens++;
      }
    } else {
      cout << "Resposta inválida. Digite apenas S ou N." << endl;
      i--; // Decrementa o contador para repetir a iteração atual
    }
  }

  float percentualHomensNao = (static_cast<float>(homensNao) / totalHomens) * 100;

  cout << "Resultado da pesquisa:" << endl;
  cout << "a) Número de pessoas que responderam sim: " << pessoasSim << endl;
  cout << "b) Número de pessoas que responderam não: " << pessoasNao << endl;
  cout << "c) Número de mulheres que responderam sim: " << mulheresSim << endl;
  cout << "d) Percentual de homens que responderam não: " << percentualHomensNao << "%" << endl;

  return 0;
}