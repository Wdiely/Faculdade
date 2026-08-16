#include "Carro.h"
#include <iostream>
#include <string>
using namespace std;


Carro::Carro() {
    nome= "\0";
    marca= "\0";
    motor= 0.0;
    cor= "\0";
    valor= 0.0;
}

Carro::Carro(const Carro& outro){
    copiar(outro);   
}

void Carro::setnome(string nome){
    this->nome =nome ;
}
void Carro::setmarca(string marca){
    this->marca =marca ;
}
void Carro::setmotor(float motor){
    this->motor =motor ;
}
void Carro::setcor(string cor){
    this->cor =cor ;
}
void Carro::setvalor(float valor){
    this->valor =valor ;
}

string Carro::getnome() const {
    return this->nome;
}
string Carro::getmarca() const {
    return this->marca;
}
float Carro::getmotor() const {
    return this->motor;
}
string Carro::getcor() const {
    return this->cor;
}
float Carro::getvalor() const {
    return this->valor;
}

void Carro::preencher() {
    cout << "Nome: ";
    cin >> nome;

    cout << "Marca: ";
    cin >> marca;

    cout << "Motorizacao (ex: 1.0, 2.0): ";
    cin >> motor;

    cout << "Cor: ";
    cin >> cor; 

    cout << "Valor (R$): ";
    cin >> valor;
}
void Carro::imprimir(){
    cout << "------------------------" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Marca: " << marca << endl;
    cout << "Motorizacao: " << motor<< endl;
    cout << "Cor: " << cor << endl;
    cout << "Valor: R$ " << valor << endl;
    cout << "------------------------" << endl;
}
void Carro::copiar(const Carro& outro){
    this->nome =outro.nome;
    this->marca = outro.marca;
    this->motor = outro.motor;
    this->cor = outro.cor;
    this->valor = outro.valor;
}