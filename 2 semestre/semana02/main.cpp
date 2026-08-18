#include <iostream>
#include "Livro.h"
#include "TV.h"
#include "Casa.h"
using namespace std;

int numeroDeLivroAcimaDe200(Livro *vet){
	int cont=0;
	for(int i=0; i<20; i++){
		if(vet[i].getNumeroPaginas()>200){
			cont +=1;
		}
	}	
	return cont;
}

void tvmaiscara(TV *tvs, int tam){
	int qual=0;
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			if(tvs[i].getPreco()>tvs[j+1].getPreco()){
				qual=i;
			}
		}
	}
	cout << "a TV mais cara e: ";
	tvs[qual].imprimir();
}

int main() {
/*	
	Livro livros[2];
    
    for(int i=0; i<2; i++){
    	livros[i].preencher();
	}
	
	if(livros[1].getNumeroPaginas()>livros[2].getNumeroPaginas()){
		cout << "o livro "<< livros[1].getTitulo() <<" tem mais paginas." << endl << endl;
	}else if(livros[1].getNumeroPaginas()<livros[2].getNumeroPaginas()){
		cout << "o livro "<< livros[2].getTitulo() <<" tem mais paginas." << endl << endl;
	}else{
		cout << "os livros possuem o mesmo numero de paginas." << endl << endl;
	}
	
	int*vet;
	vet = new int[20];

	Livro *prateleira = new  Livro[20];
	
	cout << "existem " << numeroDeLivroAcimaDe200(prateleira) << " livros com mais de 200 paginas";
*/
/*
	int tam=3;
	TV *tvs= new TV [tam];
	for(int i=0; i<tam; i++){
		cout << "TV " << i+1 << ":" << endl;
    	tvs[i].preencher();
	}
	
	tvmaiscara(tvs, tam);
*/
/*
	Casa Casas[2];
    
    for(int i=0; i<2; i++){
    	cout << "casa " << i+1 << endl;
    	Casas[i].preencher();
	}
	
	if(Casas[1].getPreco()>Casas[2].getPreco()){
		cout << "a Casa " << endl ;
		Casas[1].imprimir();
		cout << "\n e mais cara." << endl << endl;
	}else if(Casas[1].getPreco()<Casas[2].getPreco()){
		cout << "a Casa "<< endl;
		Casas[2].imprimir();
		cout << "\n e mais cara." << endl << endl;
	}else{
		cout << "As Casas possuem o mesmo preco." << endl << endl;
	}
*/	
		
	return 0;
}