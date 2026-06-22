#include<iostream>
#include<math.h>
using namespace std;

struct pessoa{
	string nome;
	float idade;
	float altura;
};

void preencher(pessoa &P){
	cout << "digite o nome: " << endl;
	cin >> P.nome;
	cout << "digite a idade: " << endl;
	cin >> P.idade;
	cout << "digite a altura: " << endl;
	cin >> P.altura;
}

void mostrar(pessoa &P){
	cout << "nome: " << P.nome << endl;
	cout << "idade: " <<  P.idade << endl;
	cout << "altura: " << P.altura << endl;
}

int main(){
	pessoa P1;
	preencher(P1);
	mostrar(P1);
	
	return 0;
}