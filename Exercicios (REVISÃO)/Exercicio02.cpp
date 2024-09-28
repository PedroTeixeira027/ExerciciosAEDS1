#include <iostream>
#include <locale.h>
using namespace std;
struct Tdados
{
	string nome, matricula;
	float nota1, nota2;
};
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese");
	int num;
	cout<<"Quantos alunos estão matriculados? ";
	cin>> num;
	Tdados alunos[num];
	cout<<"Cadastro:\n";
	for(int i=0; i<num; i++)
	{
		cout<<"Nome: ";
		cin>>alunos[i].nome;
		cout<<"Matrícula: ";
		cin>>alunos[i].matricula;
		cout<<"Nota1: ";
		cin>>alunos[i].nota1;
		cout<<"Nota2: ";
		cin>>alunos[i].nota2;
	}
	for(int i=0; i<num; i++)
	{
		cout<<"Matrícula: "<< alunos[i].matricula;
		cout<<endl;
		cout<<"Média: "<<(alunos[i].nota1+alunos[i].nota2)/2;
		cout<<endl;
	}
	return 0;
}