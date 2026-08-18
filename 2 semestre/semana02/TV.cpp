#include "TV.h"
#include <iostream>

using namespace std;

TV::TV() {
    this->marca = "";
    this->tamanho = 0.0;
    this->resolucao = "";
    this->preco = 0.0;
}


TV::TV(TV &outra) {
  	copiar(outra);
}



TV::TV(string marca, float tamanho, string resolucao, float preco) {
    this->marca = marca;
    this->tamanho = tamanho;
    this->resolucao = resolucao;
    this->preco = preco;
}


string TV::getMarca() {
    return marca;
}

float TV::getTamanho() {
    return tamanho;
}

string TV::getResolucao() {
    return resolucao;
}

float TV::getPreco() {
    return preco;
}


void TV::setMarca(string marca) {
    this->marca = marca;
}

void TV::setTamanho(float tamanho) {
    this->tamanho = tamanho;
}

void TV::setResolucao(string resolucao) {
    this->resolucao = resolucao;
}

void TV::setPreco(float preco) {
    this->preco = preco;
}


void TV::imprimir() {
    cout << " Marca: " << marca << endl
		 << " Tamanho: " << tamanho << endl
         << " Resolução: " << resolucao << endl 
         << " Preço: " << preco << endl;
}

void TV::preencher() {
		cout << "Informe a marca:";
		cin >> this->marca;
		cout << "Informe o tamanho:";
		cin >> this->tamanho;
		cout << "Informe a resolucao:";
		cin >> this->resolucao;
		cout << "Informe a preco:";
		cin >> this->preco;
}

void TV::copiar(TV &outra) {
    this->marca = outra.getMarca();
    this->tamanho = outra.getTamanho();
    this->resolucao = outra.getResolucao();
    this->preco = outra.getPreco();
}