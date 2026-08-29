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
		void setBinario(int contador);
		void setBruto(int contador);
		
		int getBinario();
		int getBruto();
		int getQuant();
		int getTam();
		
		int buscaBinaria(int codigoProcurado);
		int buscaBruta(int codigoProcurado);
		
	protected:
		int contadorBinario;
		int contadorBruto;
		int tam;
		int quant;
		Produto *lista;
};

#endif