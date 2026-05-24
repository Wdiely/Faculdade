#include<iostream>
using namespace std;

void tabela(){
	cout << "Especificação      Código     Preço" << endl;
	cout << "Cachorro Quente     100      R$ 1,20" << endl;
	cout << "Bauru Simples       101      R$ 1,30" << endl;
	cout << "Bauru com ovo       102      R$ 1,50" << endl;
	cout << "Hambúrguer          103      R$ 1,20" << endl;
	cout << "Cheeseburguer       104      R$ 1,30" << endl;
	cout << "Refrigerante        105      R$ 1,00" << endl;
	
	cout << "/n digite 0 para finalizar o pedido." << endl;
	
}

void pedido(){
	int cod;
	float conta, un;
	float total=0;
	do{
		cout << "qual o codigo do produto desejado? ";
		cin >> cod;
		cout << "quantos deseja? ";
		cin >> un;
		
		switch(cod){
			case 100:
				conta= 1.20 * un;
				break;
			case 101:
				conta= 1.30 * un;
				break;
			case 102:
				conta= 1.50 * un;
				break;
			case 103:
				conta= 1.20 * un;
				break;
			case 104:
				conta= 1.30 * un;
				break;
			case 105:
				conta= 1.00 * un;
				break;
			case 0:
				cout << "programa finalizado" << endl;
				break;
			default:
				cout << "codigo invalido" << endl;
				break;
		}
		
		total += conta;
		cout << "total do produto " << cod << ": " << conta << endl;
	}while(cod!=0);
	
	cout << "total a pagar: " << total;
}

int main(){
	
	tabela();
	pedido();
	
	return 0;	
}