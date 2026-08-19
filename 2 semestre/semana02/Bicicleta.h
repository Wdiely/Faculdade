#ifndef BICICLETA_H
#define BICICLETA_H

#include <string>
using namespace std;

class Bicicleta {
private:
    string marca;
    string modelo;
    int tamanhoQuadro;
    float preco;

public:
    Bicicleta();
    Bicicleta(const Bicicleta &outra);

    string getMarca();
    string getModelo();
    int getTamanhoQuadro();
    float getPreco();

    void setMarca(string marca);
    void setModelo(string modelo);
    void setTamanhoQuadro(int tamanhoQuadro);
    void setPreco(float preco);

    void preencher();
    void imprimir();
    void copiar(const Bicicleta &outra);
};

#endif