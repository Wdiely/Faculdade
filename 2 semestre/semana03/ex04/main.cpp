#include <iostream>
#include "Produto.h"
#include "Lista.h"
using namespace std;

int main() {
	Lista carrinho(10);
	Produto produtos[4];
	
	for(int i=0; i<4; i++){
		produtos[i].preencher();
		carrinho.insert(produtos[i],carrinho.getQuant());
	}
	carrinho.imprimir();
	
	cout << "preco medio: " << carrinho.precomedio() << endl;
	carrinho.abaixode100();
	cout << "lucro total: " << carrinho.lucro() << endl;
	carrinho.troca(3,1);
	
	carrinho.imprimir();
	
	return 0;
}