#include<iostream>
using namespace std;

void caixa(){
	float preco;
	float soma=0;
	
	cout << "digite 0 para finalizar a compra." << endl;
	
	do{
		int i=1;
		cout << "qual o preco do produto " << i << " ? ";
		cin >> preco;
		soma= soma + preco;
		i++;
	}while(preco!=0);
	
	cout << "total a ser pago: R$ " << soma << endl;
	
	float dinheiro;
	cout << "quanto ira dar de dinheiro? ";
	cin >> dinheiro;
	
	float troco= dinheiro-soma;
	cout << "troco necessario: R$ " << troco << endl;
}

int main(){
	int resp;
	
	do{
		
		caixa();
		
		cout << "deseja ir para proxima compra? (1-sim, 2-nao)";
		cin >> resp;
		
	}while(resp==1);
	
	return 0;
}