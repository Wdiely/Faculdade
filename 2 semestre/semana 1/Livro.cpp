/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Livro.cpp
 * Author: wdiely
 * 
 * Created on 9 de Agosto de 2026, 10:28
 */

#include <iostream>
#include "Livro.h"

using namespace std;

// Construtor Padrão
Livro::Livro() {
    titulo = "";
    autor = "";
    editora = "";
    numeroPaginas = 0;
}

// Construtor Parametrizado
Livro::Livro(string titulo, string autor, string editora, int numeroPaginas) {
    this->titulo = titulo;
    this->autor = autor;
    this->editora = editora;
    this->numeroPaginas = numeroPaginas;
}

// Setters
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

// Getters
string Livro::getTitulo() const {
    return this->titulo;
}

string Livro::getAutor() const {
    return this->autor;
}

string Livro::getEditora() const {
    return this->editora;
}

int Livro::getNumeroPaginas() const {
    return this->numeroPaginas;
}

// Método para preencher os dados com segurança ao ler espaços
void Livro::preencher() {
    cout << "Titulo: ";
    getline(cin >> ws, titulo); // 'ws' ignora espaços/quebras de linha pendentes

    cout << "Autor: ";
    getline(cin, autor);

    cout << "Editora: ";
    getline(cin, editora);

    cout << "Numero de paginas: ";
    cin >> numeroPaginas;
}
