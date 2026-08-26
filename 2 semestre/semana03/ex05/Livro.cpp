#include <iostream>
#include "Livro.h"

using namespace std;


Livro::Livro() {
    titulo = "";
    autor = "";
    editora = "";
    edicao = 0;
}


Livro::Livro(string titulo, string autor, string editora, int edicao) {
    this->titulo = titulo;
    this->autor = autor;
    this->editora = editora;
    this->edicao = edicao;
}

void Livro::setTitulo(string titulo) {
    this->titulo = titulo;
}
void Livro::setAutor(string autor) {
    this->autor = autor;
}
void Livro::setEditora(string editora) {
    this->editora = editora;
}
void Livro::setedicao(int edicao) {
    this->edicao = edicao;
}

string Livro::getTitulo()  {
    return this->titulo;
}
string Livro::getAutor()  {
    return this->autor;
}
string Livro::getEditora()  {
    return this->editora;
}
int Livro::getedicao()  {
    return this->edicao;
}

void Livro::preencher() {
    cout << "Titulo: ";
    cin >>titulo; 

    cout << "Autor: ";
    cin >> autor;

    cout << "Editora: ";
    cin >> editora;

    cout << "Numero de paginas: ";
    cin >> edicao;
}

void Livro::imprimir() {
	cout << "Titulo: " << titulo << endl; 
    cout << "Autor: " << autor << endl;
    cout << "Editora: " << editora << endl;
    cout << "Numero de paginas: " << edicao << endl;
}

void Livro::copiar(Livro &outro){
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
	this->editora = outro.getEditora();
	this->edicao = outro.getedicao();
}