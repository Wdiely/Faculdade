#include <iostream>
#include "Musica.h"

using namespace std;

Musica::Musica() {
    titulo = "";
    artista = "";
    duracao = 0;
    preco = 0;
}

Musica::Musica(const Musica &outra) {
    titulo = outra.titulo;
    artista = outra.artista;
    duracao = outra.duracao;
    preco = outra.preco;
}


string Musica::getTitulo() {
    return titulo;
}

string Musica::getArtista() {
    return artista;
}

int Musica::getDuracao() {
    return duracao;
}

float Musica::getPreco() {
    return preco;
}


void Musica::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Musica::setArtista(string artista) {
    this->artista = artista;
}

void Musica::setDuracao(int duracao) {
    this->duracao = duracao;
}

void Musica::setPreco(float preco) {
    this->preco = preco;
}


void Musica::preencher() {
    cout << "Digite o titulo: ";
    cin >> titulo;

    cout << "Digite o artista: ";
    cin >> artista;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    cout << "Digite o preco: ";
    cin >> preco;
}

void Musica::imprimir() {
    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
    cout << "Duracao: " << duracao << " segundos" << endl;
    cout << "Preco: R$ " << preco << endl;
}


void Musica::copiar(const Musica &outra) {
    titulo = outra.titulo;
    artista = outra.artista;
    duracao = outra.duracao;
    preco = outra.preco;
}