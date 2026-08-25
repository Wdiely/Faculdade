#include "Livro.h"
#include <iostream>
using namespace std;
// Construtor Padrão
Livro::Livro() {
    id = 0;
    titulo = "";
    autor = "";
}

// Construtor Parametrizado
Livro::Livro(const Livro &outro) {
    this->id = outro.getId();
    this->titulo = outro.getTitulo();
    this->autor = outro.getAutor();
}

// Getters (com o sufixo const para permitir chamadas seguras)
int Livro::getId() const {
    return this->id;
}

string Livro::getTitulo() const {
    return this->titulo;
}

string Livro::getAutor() const {
    return this->autor;
}

// Setters
void Livro::setId(int id) {
    this->id = id;
}

void Livro::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Livro::setAutor(string autor) {
    this->autor = autor;
}

// Método para preencher os dados via teclado
void Livro::preencher() {
    cout << "ID: ";
    cin >> id;

    cout << "Titulo: ";
    getline(cin >> ws, titulo); // ws limpa o buffer do teclado

    cout << "Autor: ";
    getline(cin, autor);
}

// Método para exibir os dados na tela
void Livro::imprimir() const {
    cout << "------------------------" << endl;
    cout << "ID: " << id << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "------------------------" << endl;
}

void Livro::copiar(Livro &outro){
	this->id = outro.getId();
    this->titulo = outro.getTitulo();
    this->autor = outro.getAutor();
}