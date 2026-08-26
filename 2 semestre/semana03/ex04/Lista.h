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
		
		void setQuant(int quant);
		void setTam(int quant);
		int getQuant();
		int getTam();
		
		//
		
		float precomedio();
		void abaixode100();
		float lucro();
		void troca(int posi1, int posi2);
		
	protected:
		int tam;
		int quant;
		Produto *lista;
};

#endif