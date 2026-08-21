#include <iostream>
#include "Lista.h"
#include "Produto.h"

using namespace std;

int main(){
	Lista carrinho;

	carrinho.insert(0);
	Produto p;
	p.preencher();
	carrinho.insert(p);

	carrinho.insert(0);
	carrinho.insert(0);
	
	carrinho.insert(2);
	carrinho.remove(1);

	return 0;
}