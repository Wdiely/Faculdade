#ifndef LIVRO_H
#define LIVRO_H

#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    string editora;
    int edicao;

public:
    Livro(); 
    Livro(string titulo, string autor, string editora, int edicao);
    
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setEditora(string editora);
    void setedicao(int edicao);
    
    string getTitulo();
    string getAutor();
    string getEditora();
    int getedicao();
    
    void preencher();
    void imprimir();
    void copiar(Livro &outro);
};

#endif 