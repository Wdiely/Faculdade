/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Livro.h
 * Author: wdiely
 *
 * Created on 9 de Agosto de 2026, 10:28
 */

#ifndef LIVRO_H
#define LIVRO_H

#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    string editora;
    int numeroPaginas;

public:
    Livro(); 
    Livro(string titulo, string autor, string editora, int numeroPaginas);
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setEditora(string editora);
    void setNumeroPaginas(int numeroPaginas);
    string getTitulo() const;
    string getAutor() const;
    string getEditora() const;
    int getNumeroPaginas() const;
    void preencher();
};

#endif /* LIVRO_H */

