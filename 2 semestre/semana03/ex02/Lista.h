#ifndef LISTA_H
#define LISTA_H
#include "Produto.h"
#include <iostream>
#include <string>

using namespace std;

class Lista
{
	public:
		Lista();
		Lista(int tamanho);
		
		void insert(Produto &novo, int posicao);
		void remove(int posicao);
		
		void shiftEnd(int posicao);
		void shiftFront(int posicao);
		
		void imprimir();
		
		Produto& getProduto(int posicao) { return lista[posicao]; }
		
		void setQuant(int quant);
		void setTam(int quant);
		int getQuant();
		int getTam();
	protected:
		int tam;
		int quant;
		Produto *lista;
};

#endif