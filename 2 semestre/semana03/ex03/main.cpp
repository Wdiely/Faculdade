#include <iostream>
#include "Lista.h"
#include "Produto.h"
using namespace std;

void funcao(Lista carrinho, Produto* produtos){
	int menor= produtos[0].getEstoque();
	int indice;
	for(int i=0; i<carrinho.getQuant(); i++){
		if(produtos[i].getEstoque()<menor){
			menor=produtos[i].getEstoque();
			indice=i;
		}
	}
	produtos[indice].setEstoque(menor+100);
	carrinho.remove(indice);
    carrinho.insert(produtos[indice], indice);
}

int main() {
	Lista carrinho(10);
	Produto produtos[6];
	
	for(int i=0; i<6; i++){
		produtos[i].preencher();
		carrinho.insert(produtos[i],carrinho.getQuant());
	}
	carrinho.imprimir();
	
	funcao(carrinho, produtos);
	carrinho.imprimir();
	
	Produto novo;
	novo.preencher();
	carrinho.insert(novo, 5);
	carrinho.imprimir();
	return 0;
}