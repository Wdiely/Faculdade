#include <iostream>
using namespace std;

struct carro {
    string marca, modelo;
    int ano;

    void preencher(){
		cout << "digite o marca: " << endl;
		cin >> marca;
		cout << "digite a modelo: " << endl;
		cin >> modelo;
		cout << "digite o ano: " << endl;
		cin >> ano;
	}

	void mostrar(){
		cout << "marca: " << marca << endl;
		cout << "modelo: " << modelo << endl;
		cout << "ano: " << ano << endl;
	}

};

int main(){
	int tam;
	cout << "quantos carros? ";
	cin >> tam;
	
	carro *p= new carro[tam];
	for (int i=0; i<tam; i++){
		p[i].preencher();
		p[i].mostrar();
	}
	
	
	return 0;
}