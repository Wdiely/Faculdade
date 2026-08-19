#include <iostream>
#include "Filme.h"

using namespace std;

Filme::Filme() {
    titulo = "";
    diretor = "";
    duracao = 0;
    preco = 0;
}

Filme::Filme(const Filme &outro) {
    titulo = outro.titulo;
    diretor = outro.diretor;
    duracao = outro.duracao;
    preco = outro.preco;
}

string Filme::getTitulo() {
    return titulo;
}

string Filme::getDiretor() {
    return diretor;
}

int Filme::getDuracao() {
    return duracao;
}

float Filme::getPreco() {
    return preco;
}

void Filme::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Filme::setDiretor(string diretor) {
    this->diretor = diretor;
}

void Filme::setDuracao(int duracao) {
    this->duracao = duracao;
}

void Filme::setPreco(float preco) {
    this->preco = preco;
}

void Filme::preencher() {
    cout << "Digite o titulo: ";
    cin >> titulo;

    cout << "Digite o diretor: ";
    cin >> diretor;

    cout << "Digite a duracao em minutos: ";
    cin >> duracao;

    cout << "Digite o preco: ";
    cin >> preco;
}

void Filme::imprimir() {
    cout << "Titulo: " << titulo << endl;
    cout << "Diretor: " << diretor << endl;
    cout << "Duracao: " << duracao << " minutos" << endl;
    cout << "Preco: R$ " << preco << endl;
}

void Filme::copiar(const Filme &outro) {
    titulo = outro.titulo;
    diretor = outro.diretor;
    duracao = outro.duracao;
    preco = outro.preco;
}