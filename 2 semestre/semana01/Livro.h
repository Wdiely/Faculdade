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
    
    string getTitulo();
    string getAutor();
    string getEditora();
    int getNumeroPaginas();
    
    void preencher();
};

#endif 