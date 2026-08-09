/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Motor.h
 * Author: wdiely
 *
 * Created on 9 de Agosto de 2026, 10:36
 */

#ifndef MOTOR_H
#define MOTOR_H

#include <string>

using namespace std;

class Motor {
private:
    string tipo;     
    double potencia; 
    double consumo;  

public:
    Motor();
    Motor(string tipo, double potencia, double consumo);

    void setTipo(string tipo);
    void setPotencia(double potencia);
    void setConsumo(double consumo);

    string getTipo() const;
    double getPotencia() const;
    double getConsumo() const;

    void preencher();
};

#endif /* MOTOR_H */

