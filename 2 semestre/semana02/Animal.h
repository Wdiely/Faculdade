#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal
{
	public:
		Animal();
	    Animal(const Animal &outro);
	
	    string getEspecie();
	    string getRaca();
	    int getIdade();
	    float getPeso();
	
	    void setEspecie(string especie);
	    void setRaca(string raca);
	    void setIdade(int idade);
	    void setPeso(float peso);
	
	    void preencher();
	    void imprimir();
	    void copiar(const Animal &outro);
	private:
		string especie;
	    string raca;
	    int idade;
	    float peso;
};

#endif