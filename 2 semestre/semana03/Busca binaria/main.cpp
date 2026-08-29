#include <iostream>
#include "Lista.h"
#include "Produto.h"
using namespace std;

int main() {
	Lista Busca(41);
	Produto cod[41];
	
	for(int i=0; i<41; i++){
		cod[i].setCodigo(i);
		Busca.insert(cod[i], i);
	}
	
	Busca.imprimir();
	
	//pior caso
	Busca.buscaBinaria(40);
	Busca.buscaBruta(40);
	cout << "binario: " << Busca.getBinario() << endl;
	cout << "bruta: " << Busca.getBruto() << endl;
	
	//melhor caso
	Busca.buscaBinaria(20);
	Busca.buscaBruta(0);
	cout << "binario: " << Busca.getBinario() << endl;
	cout << "bruta: " << Busca.getBruto() << endl;
	
	return 0;
}