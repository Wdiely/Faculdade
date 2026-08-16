#include <iostream>
#include "Livro.h"

using namespace std;


Livro::Livro() {
    titulo = "";
    autor = "";
    editora = "";
    numeroPaginas = 0;
}


Livro::Livro(string titulo, string autor, string editora, int numeroPaginas) {
    this->titulo = titulo;
    this->autor = autor;
    this->editora = editora;
    this->numeroPaginas = numeroPaginas;
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
void Livro::setNumeroPaginas(int numeroPaginas) {
    this->numeroPaginas = numeroPaginas;
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
int Livro::getNumeroPaginas()  {
    return this->numeroPaginas;
}

void Livro::preencher() {
    cout << "Titulo: ";
    cin >>titulo; 

    cout << "Autor: ";
    cin >> autor;

    cout << "Editora: ";
    cin >> editora;

    cout << "Numero de paginas: ";
    cin >> numeroPaginas;
}