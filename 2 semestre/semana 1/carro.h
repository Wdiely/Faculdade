/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   carro.h
 * Author: wdiely
 *
 * Created on 9 de Agosto de 2026, 09:17
 */

#ifndef CARRO_H
#define CARRO_H
#include <string>
using namespace std;

class carro {
public:
    carro();
    carro(const carro& outro);
    void setnome(string nome);
    void setmarca(string marca);
    void setmotor(float motor);
    void setcor(string cor);
    void setvalor(float valor);
    string getnome() const;
    string getmarca() const;
    float getmotor() const;
    string getcor() const;
    float getvalor() const;
    void preencher();
    void imprimir();
    void copiar(const carro& outro);
private:
    string nome;
    string marca;
    float motor;
    string cor;
    float valor;
};

#endif /* CARRO_H */

