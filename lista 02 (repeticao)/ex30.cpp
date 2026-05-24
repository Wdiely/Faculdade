#include<iostream>
using namespace std;

void tabela(){
	
	cout << "LOJAS QUASE DOIS | TABELA DE PRECOS" << endl;
	
	for(int i=1; i<=50; i++){
		float conta= i * 1.99;
		cout << i << ". " << "R$ " << conta << endl;
	}
	
}

int main(){
	
	tabela();
	
	return 0;
}