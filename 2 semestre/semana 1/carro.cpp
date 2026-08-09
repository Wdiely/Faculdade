/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   carro.cpp
 * Author: wdiely
 * 
 * Created on 9 de Agosto de 2026, 09:17
 */

#include "carro.h"
#include <iostream>
using namespace std;
#include <string>

carro::carro() {
    nome= "\0";
    marca= "\0";
    motor= 0.0;
    cor= "\0";
    valor= 0.0;
}

carro::carro(const carro& outro){
    copiar(outro);   
}

void carro::setnome(string nome){
    this->nome =nome ;
}
void carro::setmarca(string marca){
    this->marca =marca ;
}
void carro::setmotor(float motor){
    this->motor =motor ;
}
void carro::setcor(string cor){
    this->cor =cor ;
}
void carro::setvalor(float valor){
    this->valor =valor ;
}
string carro::getnome() const {
    return this->nome;
}
string carro::getmarca() const {
    return this->marca;
}
float carro::getmotor() const {
    return this->motor;
}
string carro::getcor() const {
    return this->cor;
}
float carro::getvalor() const {
    return this->valor;
}

void carro::preencher() {
    cout << "Nome: ";
    getline(cin >> ws, nome);

    cout << "Marca: ";
    getline(cin, marca);

    cout << "Motorizacao (ex: 1.0, 2.0): ";
    cin >> motor;

    cout << "Cor: ";
    getline(cin >> ws, cor); // 'ws' limpa o Enter que sobrou do 'motor'

    cout << "Valor (R$): ";
    cin >> valor;
}
void carro::imprimir(){
    cout << "------------------------" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Marca: " << marca << endl;
    cout << "Motorizacao: " << motor<< endl;
    cout << "Cor: " << cor << endl;
    cout << "Valor: R$ " << valor << endl;
    cout << "------------------------" << endl;
}
void carro::copiar(const carro& outro){
    this->nome =outro.nome;
    this->marca = outro.marca;
    this->motor = outro.motor;
    this->cor = outro.cor;
    this->valor = outro.valor;
}


