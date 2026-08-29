#include "Produto.h"
#include <iostream>
#include <string>

using namespace std;

Produto::Produto(){
	nome = "";
	preco =- 0.0;
	codigo = 0;
}

Produto::Produto(const Produto &outro){
	nome= outro.nome;
	preco= outro.preco;
	codigo= outro.codigo;
}

string Produto::getNome(){
	return nome;
}
float Produto::getPreco(){
	return this->preco;
}
int Produto::getCodigo(){
	return this->codigo;
}
		
void Produto::setNome(string nome){
	this-> nome= nome;
}
void Produto::setPreco(float preco){
	this-> preco= preco;
}
void Produto::setCodigo(int codigo){
	this-> codigo= codigo;
}
	
void Produto::preencher(){
	cout << "qual o produto?";
	cin >> nome;
	
	cout << "qual o preco?";
	cin >> preco;
	
	cout << "qual o codigo?";
	cin >> codigo;
	
	cout << endl;
}
void Produto::imprimir(){
	cout << "nome: " << nome << endl
		<< "preco: " << preco << endl
		<< "codigo: " << codigo << endl;
}
void Produto::copiar(Produto &outro){
	nome= outro.nome;
	preco= outro.preco;
	codigo= outro.codigo;
}

float Produto::getLucro(){
	return getPreco()*0.05;
}