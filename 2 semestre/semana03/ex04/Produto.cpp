#include "Produto.h"
#include <iostream>
#include <string>

using namespace std;

Produto::Produto(){
	nome = "";
	preco =- 0.0;
	estoque = 0;
}

Produto::Produto(const Produto &outro){
	nome= outro.nome;
	preco= outro.preco;
	estoque= outro.estoque;
}

string Produto::getNome(){
	return nome;
}
float Produto::getPreco(){
	return this->preco;
}
int Produto::getEstoque(){
	return this->estoque;
}
		
void Produto::setNome(string nome){
	this-> nome= nome;
}
void Produto::setPreco(float preco){
	this-> preco= preco;
}
void Produto::setEstoque(int estoque){
	this-> estoque= estoque;
}
	
void Produto::preencher(){
	cout << "qual o produto?";
	cin >> nome;
	
	cout << "qual o preco?";
	cin >> preco;
	
	cout << "qual o estoque?";
	cin >> estoque;
	
	cout << endl;
}
void Produto::imprimir(){
	cout << "nome: " << nome << endl
		<< "preco: " << preco << endl
		<< "estoque: " << estoque << endl;
}
void Produto::copiar(Produto &outro){
	nome= outro.nome;
	preco= outro.preco;
	estoque= outro.estoque;
}

float Produto::getLucro(){
	return getPreco()*0.05;
}