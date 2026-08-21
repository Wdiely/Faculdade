#ifndef LISTA_H
#define LISTA_H
#include "Produto.h"

class Lista
{
	private:
		int tam, quant;
		Produto *Lista;
		
		bool temEspaco();
		bool isEmpty();
		bool indiceValido(int i);
		void shiftFront(int aPartir);
		void shiftEnd(int ate);
	public:
		Lista();
		Lista(const Lista &outra);
		
		void insert();
		void insert(int posicao);
		void insert(const Produto& p);
		void remove();
		void remove(int posicao);
		
		void imprimir();
		void preencher();
		
		void setLista(Produto *lista);
		Produto getLista() const;
		void setQuant(int quant);
		int getQuant() const;
		void setTam(int quant);
		int getTam() const;
};

#endif