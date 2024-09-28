#include <iostream>
#include <locale.h>
using namespace std;
struct TDados
{
	string nome, cpf;
	float altura, peso;
	char sexo;
};
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese");
	int num;
	cout<<"Quantas pessoas serão cadastradas? ";
	cin>> num;
	TDados pacientes[num];
	cout<<"Cadastro:\n";
	for(int i=0; i<num; i++)
	{
		cout<<"Nome: ";
		cin>>pacientes[i].nome;
		cout<<"CPF: ";
		cin>>pacientes[i].cpf;
		cout<<"Altura: ";
		cin>>pacientes[i].altura;
		cout<<"Peso: ";
		cin>>pacientes[i].peso;
		cout<<"Sexo (M/F): ";
		cin>>pacientes[i].sexo;
	}
	string aux;
	cout<<"Qual CPF para consulta? ";
	cin>>aux;
	for(int i=0; i<num; i++)
	{
		if(pacientes[i].cpf== aux)
		{
			cout<<"IMC = ";
			cout<<pacientes[i].peso/(pacientes[i].altura*pacientes[i].altura);
		}
	}
	return 0;
}