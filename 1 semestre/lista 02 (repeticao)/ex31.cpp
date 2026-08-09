#include<iostream>
using namespace std;

void tabela(float valor){
	
	cout << "PADARIA | TABELA DE PRECOS" << endl;
	
	for(int i=1; i<=50; i++){
		float conta= i * valor;
		cout << i << ". " << "R$ " << conta << endl;
	}
	
}

int main(){
	float valor;
	cout << "qual o valor do pao? ";
	cin >> valor;
	
	tabela(valor);
	
	return 0;
}