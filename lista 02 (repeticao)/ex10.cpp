#include<iostream>
using namespace std;

void funcao(string nome, string senha){
	while(nome == senha){
		cout << "erro, o nome e a senha nao podem ser iguais" << endl;
		
		cout << "digite seu nome: ";
		cin >> nome;
		cout << "digite sua senha: ";
		cin >> senha;
	}
	cout << "login feito.";
}

int main (){
	string nome, senha;
	
	cout << "digite seu nome: ";
	cin >> nome;
	cout << "digite sua senha: ";
	cin >> senha;
	
	funcao(nome,senha);
	
	return 0;
}