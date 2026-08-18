#ifndef CASA_H
#define CASA_H

#include <string>

using namespace std;

class Casa
{
	private:
		string endereco;
		float area;
		int quartos;
		float preco;
	public:
		Casa();
		Casa(const Casa &outro);
		Casa(string endereco, float area, int quartos, float preco);
		
		void setEndereco(string endereco);
		void setArea(float area);
		void setQuartos(int quartos);
		void setPreco(float preco);
		
		string getEndereco();
		float getArea();
		int getQuartos();
		float getPreco();
		
		void preencher();
		void imprimir();
		void copiar(Casa &outro);
};

#endif