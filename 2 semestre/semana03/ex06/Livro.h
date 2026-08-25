#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    int id;
    string titulo;
    string autor;

public:
    Livro();
    Livro(const Livro &outro);

    int getId() const;
    string getTitulo() const;
    string getAutor() const;

    void setId(int id);
    void setTitulo(string titulo);
    void setAutor(string autor);

    void preencher();
    void imprimir() const;
    void copiar(Livro &outro);
};

#endif