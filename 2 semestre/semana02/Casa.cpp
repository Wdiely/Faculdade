#include "Casa.h"
#include <iostream>

using namespace std;

Casa::Casa(){
	this->endereco= "";
	this->area= 0.0;
	this->quartos= 0;
	this->preco= 0.0;
}
Casa::Casa(const Casa &outro){
	this->endereco= endereco;
	this->area= area;
	this->quartos= quartos;
	this->preco= preco;
}
Casa::Casa(string endereco, float area, int quartos, float preco){
	this->endereco= endereco;
	this->area= area;
	this->quartos= quartos;
	this->preco= preco;
}


void Casa::setEndereco(string endereco){
	this->endereco = endereco;
}
void Casa::setArea(float area){
	this->area = area;
}
void Casa::setQuartos(int quartos){
	this->quartos = quartos;
}
void Casa::setPreco(float preco){
	this->preco = preco;
}

	
string Casa::getEndereco(){
	return this-> endereco;
}
float Casa::getArea(){
	return this-> area;
}
int Casa::getQuartos(){
	return this-> quartos;
}
float Casa::getPreco(){
	return this-> preco;
}


void Casa::preencher(){
	cout << "endereco: "; 
	cin >> this->endereco;
	cout << "area: "; 
	cin >> this->area;
	cout << "quartos: "; 
	cin >> this->quartos;
	cout << "preco: "; 
	cin >> this->preco;
}
void Casa::imprimir(){
	cout << "endereco: "<<endereco<<endl;
	cout << "area: "<<area<<endl;
	cout << "quartos: "<<quartos<<endl;
	cout << "preco: "<<preco<<endl;
}

void Casa::copiar(Casa &outra){
	this->endereco= outra.getEndereco();
	this->area= outra.getArea();
	this->quartos= outra.getQuartos();
	this->preco= outra.getPreco();
}
