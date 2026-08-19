#ifndef MUSICA_H
#define MUSICA_H

#include <string>
using namespace std;

class Musica {
private:
    string titulo;
    string artista;
    int duracao;
    float preco;

public:
    Musica();
    Musica(const Musica &outra);

    string getTitulo();
    string getArtista();
    int getDuracao();
    float getPreco();

    void setTitulo(string titulo);
    void setArtista(string artista);
    void setDuracao(int duracao);
    void setPreco(float preco);

    void imprimir();
    void copiar(const Musica &outra);
    void preencher();
};

#endif