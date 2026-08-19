#include <iostream>
#include "Bicicleta.h"

using namespace std;

Bicicleta::Bicicleta() {
    marca = "";
    modelo = "";
    tamanhoQuadro = 0;
    preco = 0;
}

Bicicleta::Bicicleta(const Bicicleta &outra) {
    marca = outra.marca;
    modelo = outra.modelo;
    tamanhoQuadro = outra.tamanhoQuadro;
    preco = outra.preco;
}

string Bicicleta::getMarca() {
    return marca;
}

string Bicicleta::getModelo() {
    return modelo;
}

int Bicicleta::getTamanhoQuadro() {
    return tamanhoQuadro;
}

float Bicicleta::getPreco() {
    return preco;
}

void Bicicleta::setMarca(string marca) {
    this->marca = marca;
}

void Bicicleta::setModelo(string modelo) {
    this->modelo = modelo;
}

void Bicicleta::setTamanhoQuadro(int tamanhoQuadro) {
    this->tamanhoQuadro = tamanhoQuadro;
}

void Bicicleta::setPreco(float preco) {
    this->preco = preco;
}

void Bicicleta::preencher() {
    cout << "Digite a marca: ";
    cin >> marca;

    cout << "Digite o modelo: ";
    cin >> modelo;

    cout << "Digite o tamanho do quadro: ";
    cin >> tamanhoQuadro;

    cout << "Digite o preco: ";
    cin >> preco;
}

void Bicicleta::imprimir() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Tamanho do quadro: " << tamanhoQuadro << endl;
    cout << "Preco: R$ " << preco << endl;
}

void Bicicleta::copiar(const Bicicleta &outra) {
    marca = outra.marca;
    modelo = outra.modelo;
    tamanhoQuadro = outra.tamanhoQuadro;
    preco = outra.preco;
}