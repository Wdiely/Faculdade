#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

using namespace std;

class Produto
{
	private:
		string nome;
		float preco;
		int codigo;
	public:
		Produto();
		Produto(const Produto &outro);
		
		string getNome();
		float getPreco();
		int getCodigo();
		
		void setNome(string nome);
		void setPreco(float preco);
		void setCodigo(int codigo);
		
		void preencher();
		void imprimir();
		void copiar(Produto &outro);
		
		float getLucro();		
};

#endif