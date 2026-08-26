#include <iostream>
#include "Lista.h"
#include "Produto.h"
using namespace std;

void funcao(Lista carrinho, Produto* produtos){
	int maior= produtos[0].getPreco();
	int indice;
	for(int i=0; i<carrinho.getQuant(); i++){
		if(produtos[i].getPreco()>maior){
			maior=produtos[i].getPreco();
			indice=i;
		}
	}
	carrinho.remove(indice);
}

int main() {
	Lista carrinho(10);
	Produto produtos[3];
	
	for(int i=0; i<3; i++){
		produtos[i].preencher();
		carrinho.insert(produtos[i],carrinho.getQuant());
	}
	carrinho.imprimir();
	
	funcao(carrinho, produtos);
	
	carrinho.imprimir();
	return 0;
}