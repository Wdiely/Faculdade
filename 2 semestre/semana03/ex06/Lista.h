#ifndef LISTA_H
#define LISTA_H
#include "Livro.h"
#include <iostream>
#include <string>

using namespace std;

class Lista
{
	public:
		Lista();
		Lista(int tamanho);
		
		void insert(Livro &novo, int posicao);
		void remove(int posicao);
		
		void shiftEnd(int posicao);
		void shiftFront(int posicao);
		
		Livro* buscar(int id);
		void imprimir();
		
		void setQuant(int quant);
		void setTam(int quant);
		int getQuant();
		int getTam();
	protected:
		int tam;
		int quant;
		Livro *lista;
};

#endif