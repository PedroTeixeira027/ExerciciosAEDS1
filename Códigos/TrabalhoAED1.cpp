#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	string nome[10], cpf[10], data_nascimento[10], endereco[10], time_favorito[10], selecao_favorita[10];
	string descricao[10], modelo[10], marca[10], tamanho[10], cor[10], preco[10];
	string produto[10], data_compra[10], valor_compra[10], situacao[10];
	string cliente[10], valor_venda[10], data_venda[10], data_recebimento[10];
	char resposta[10];
	bool gosta_futebol[10], gosta_volei[10], gosta_basquete[10], gosta_handbol[10], gosta_natacao[10], gosta_ciclismo[10], gosta_atletismo[10], gosta_musculacao[10];
	int op = -1;
	int indice = 0;
	string precoa;
    bool found = false;
	while (op != 0)
	{
		cout << printf("%c", 2) << "Athletic registration system" << endl;
		cout << "Opções: \n1-Cadastro de Pessoas\n2-Cadastro de Produtos\n3-Cadastro de Itens de Produtos\n4-Cadastro de venda\n5-Listagem dos Produtos(Determinado preço)\n6-Listagem das 10 ultimas vendas\nQual a opção desejada?" << endl;
		cin >> op;
		system("cls");
		switch (op)
		{
		case 1:
			cout << "\nCadastro de Pessoas\n";
			cout << "Nome: ";
			cin >> nome[indice];
			cout << "CPF: ";
			cin >> cpf[indice];
			cout << "Sexo(M/F): ";
			cin >> resposta[indice];
			if (resposta[indice] != 'M' && resposta[indice] != 'F')
			{
				cout << "Digite M ou F." << endl;
				cout << "Sexo(M/F): ";
				cin >> resposta[indice];
			    if (resposta[indice] != 'M' && resposta[indice] != 'F')
				break;
			}
			cout << "Data de nascimento: ";
			cin >> data_nascimento[indice];
			cout << "Endereço: ";
			cin >> endereco[indice];
			cout << "Time favorito: ";
			cin >> time_favorito[indice];
			cout << "Seleção favorita: ";
			cin >> selecao_favorita[indice];
			cout << "Gosta de futebol? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de futebol? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;	
			}
			gosta_futebol[indice] = (resposta[indice] == 'S');
			cout << "Gosta de volei? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de volei? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;	
			}
			gosta_volei[indice] = (resposta[indice] == 'S');
			cout << "Gosta de basquete? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de basquete? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;
			}
			gosta_basquete[indice] = (resposta[indice] == 'S');
			cout << "Gosta de handbol? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de handbol? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;	
			}
			gosta_handbol[indice] = (resposta[indice] == 'S');
			cout << "Gosta de natação? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de natação? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;		
			}
			gosta_natacao[indice] = (resposta[indice] == 'S');
			cout << "Gosta de ciclismo? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de ciclismo? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;	
			}
			gosta_ciclismo[indice] = (resposta[indice] == 'S');
			cout << "Gosta de atletismo? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de atletismo? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;	
			}
			gosta_atletismo[indice] = (resposta[indice] == 'S');
			cout << "Gosta de musculação? (S/N) ";
			cin >> resposta[indice];
			if (resposta[indice] != 'S' && resposta[indice] != 'N')
			{
				cout << "Digite S ou N." << endl;
				cout << "Gosta de musculação? (S/N) ";
			    cin >> resposta[indice];
			    if (resposta[indice] != 'S' && resposta[indice] != 'N')
				break;	
			}
			gosta_musculacao[indice] = (resposta[indice] == 'S');
			indice++;
			system("cls");
			cout << "Cadastro efetuado com sucesso!\n";
			cout << "-----------------------\n";
			break;
		    case 2:
				cout<<"\nCadastro de Produtos\n";
				cout<<"Descriçao: "; 
				cin>>descricao[indice];
				cout<<"Modelo: "; 
				cin>>modelo[indice];
				cout<<"Marca: "; 
				cin>>marca[indice];
				cout<<"Tamanho: "; 
				cin>>tamanho[indice];
				cout<<"Cor: "; 
				cin>>cor[indice];
				cout<<"Preço: "; 
				cin>>preco[indice];
				indice++;
				cout<<"Cadastro efetuado com sucesso!\n";
				cout << "-----------------------\n";
				system("cls");
			break;
			case 3:
				cout<<"\nCadastro de Itens de Produtos\n";
				cout<<"Produto: "; 
				cin>>produto[indice];
				cout<<"Data em que foi realizada a compra: "; 
				cin>>data_compra[indice];
				cout<<"Valor da compra: ";
				 cin>>valor_compra[indice];
				cout<<"Situaçao: "; 
				cin>>situacao[indice];
				indice++;
				system("cls");
				cout<<"Cadastro efetuado com sucesso!\n";
				cout << "-----------------------\n";		
				break;
			case 4:
				cout<<"\nCadastro de Venda\n";
				cout<<"Produto: "; 
				cin>>produto[indice];
				cout<<"Cliente: "; 
				cin>>cliente[indice];
				cout<<"Valor da venda: "; 
				cin>>valor_venda[indice];
				cout<<"Data em que foi realizada a venda: "; 
				cin>>data_venda[indice];
				cout<<"Data do recebimento: "; 
				cin>>data_recebimento[indice];
				cout<<"Situaçao: "; 
				cin>>situacao[indice];
				indice++;
				system("cls");
				cout<<"Cadastro efetuado com sucesso!\n";
				cout << "-----------------------\n";		
			break;
		    case 5:
                cout << "\nBusca por preço específico\n";
                cout << "Digite o preço desejado: ";
                cin >> precoa;
                for (int i = 0; i < indice; i++) 
				{
                 if (preco[i] == precoa) 
				 {
                   found = true;
                   cout << "Descrição: " << descricao[i] << endl;
                   cout << "Modelo: " << modelo[i] << endl;
                   cout << "Marca: " << marca[i] << endl;
                   cout << "Tamanho: " << tamanho[i] << endl;
                   cout << "Cor: " << cor[i] << endl;
                   cout << "Preço: " << preco[i] << endl;
                   cout << "-----------------------\n";
                  }
                }
                  if (!found) 
				  {
                    cout << "Nenhum produto encontrado com o preço especificado.\n";
                    cout << "-----------------------\n";
                  }
  	   	   break;
                case 6:
                 cout << "\nListagem das 10 últimas vendas\n";
				 int ultimas_vendas[10];
                 int contador = 0;
                 for (int i = indice - 1; i >= 0; i--)
				 {
                    if (situacao[i] == "vendido") 
					{
                        ultimas_vendas[contador] = i;
                        contador++;
                       if (contador == 10) 
				       { 	
                     break;
           
                       }
                    }
                 }
                for (int i = contador - 1; i >= 0; i--) 
				{
                    int venda_indice = ultimas_vendas[i];
                    cout << "Produto: " << produto[venda_indice] << endl;
                    cout << "Cliente: " << cliente[venda_indice] << endl;
                    cout << "Valor da venda: " << valor_venda[venda_indice] << endl;
                    cout << "Data da venda: " << data_venda[venda_indice] << endl;
                    cout << "Data do recebimento: " << data_recebimento[venda_indice] << endl;
                    cout << "-----------------------\n";
                }
                break;
		}
	}
	return 0;
}