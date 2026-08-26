#include "Produto.h"
#include <iostream>
#include <string>

using namespace std;

Produto::Produto(){
	nome = "";
	preco =- 0.0;
}

Produto::Produto(const Produto &outro){
	nome= outro.nome;
	preco= outro.preco;
}

string Produto::getNome(){
	return nome;
}
float Produto::getPreco(){
	return this->preco;
}
		
void Produto::setNome(string nome){
	this-> nome= nome;
}
void Produto::setPreco(float preco){
	this-> preco= preco;
}
	
void Produto::preencher(){
	cout << "qual o produto?";
	cin >> nome;
	
	cout << "qual o preco?";
	cin >> preco;
}
void Produto::imprimir(){
	cout << "nome: " << nome << endl
		<< "preco: " << preco << endl;
}
void Produto::copiar(Produto &outro){
	nome= outro.nome;
	preco= outro.preco;
}