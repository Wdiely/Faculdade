#ifndef FILME_H
#define FILME_H

#include <string>
using namespace std;

class Filme {
private:
    string titulo;
    string diretor;
    int duracao;
    float preco;

public:
    Filme();
    Filme(const Filme &outro);

    string getTitulo();
    string getDiretor();
    int getDuracao();
    float getPreco();

    void setTitulo(string titulo);
    void setDiretor(string diretor);
    void setDuracao(int duracao);
    void setPreco(float preco);

    void preencher();
    void imprimir();
    void copiar(const Filme &outro);
};

#endif