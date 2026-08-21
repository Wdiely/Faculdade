#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

using namespace std;

class Produto
{
	private:
		string nome;
		float preco;
	public:
		Produto();
		Produto(const Produto &outro);
		
		string getNome();
		float getPreco();
		
		void setNome(string nome);
		void setPreco(float preco);
		
		void preencher();
		void imprimir();
		void copiar(Produto &outro);		
};

#endif