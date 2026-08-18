#ifndef TV_H
#define TV_H

#include <string>

using namespace std;

class TV {
	private:
    string marca;
    float tamanho;
    string resolucao;
    float preco;

	public:
		
    TV();
		TV(TV &outra);
		TV(string marca, float tamanho, string resolucao, float preco);

  
    string getMarca();
    float getTamanho();
    string getResolucao();
    float getPreco();


    void setMarca(string marca);
    void setTamanho(float tamanho);
    void setResolucao(string resolucao);
    void setPreco(float preco);

   
    void imprimir();
    void preencher();
    void copiar(TV &outra);
};

#endif