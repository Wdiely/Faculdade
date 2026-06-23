#include<iostream>
using namespace std;

struct time{
	string nome;
	string cidade;
	int titulos;

void preencher(){
	cout << "digite o nome: " << endl;
	cin >> nome;
	cout << "digite a cidade: " << endl;
	cin >> cidade;
	cout << "digite o titulos: " << endl;
	cin >> titulos;
}

void mostrar(){
	cout << "nome: " << nome << endl;
	cout << "cidade: " << cidade << endl;
	cout << "titulos: " << titulos << endl;
}

};

int main(){
	int tam;
	cout << "qunatos times? ";
	cin >> tam;
	
	time *p= new time[tam];
	for (int i=0; i<tam; i++){
		p[i].preencher();
		p[i].mostrar();
	}
	
	
	return 0;
}