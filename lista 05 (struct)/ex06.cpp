#include<iostream>
#include<math.h>
using namespace std;

struct livro{
	string titulo;
	string autor;
	int ano;

void preencher(){
	cout << "digite o titulo: " << endl;
	cin >> titulo;
	cout << "digite a autor: " << endl;
	cin >> autor;
	cout << "digite o ano: " << endl;
	cin >> ano;
}

void mostrar(){
	cout << "titulo: " << titulo << endl;
	cout << "autor: " << autor << endl;
	cout << "ano: " << ano << endl;
}

};

int main(){
	int tam;
	cout << "qunatos livros? ";
	cin >> tam;
	
	livro *p= new livro[tam];
	for (int i=0; i<tam; i++){
		p[i].preencher();
		p[i].mostrar();
	}
	
	
	return 0;
}