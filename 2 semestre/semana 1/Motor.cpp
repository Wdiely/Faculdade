/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Motor.cpp
 * Author: wdiely
 * 
 * Created on 9 de Agosto de 2026, 10:36
 */

#include <iostream>
#include "Motor.h"

using namespace std;

// Construtor Padrão
Motor::Motor() {
    tipo = "";
    potencia = 0.0;
    consumo = 0.0;
}

// Construtor Parametrizado
Motor::Motor(string tipo, double potencia, double consumo) {
    this->tipo = tipo;
    this->potencia = potencia;
    this->consumo = consumo;
}

// Setters
void Motor::setTipo(string tipo) {
    this->tipo = tipo;
}

void Motor::setPotencia(double potencia) {
    this->potencia = potencia;
}

void Motor::setConsumo(double consumo) {
    this->consumo = consumo;
}

// Getters
string Motor::getTipo() const {
    return this->tipo;
}

double Motor::getPotencia() const {
    return this->potencia;
}

double Motor::getConsumo() const {
    return this->consumo;
}

// Preencher dados pelo teclado
void Motor::preencher() {
    cout << "Tipo do motor (eletrico, gasolina, diesel): ";
    getline(cin >> ws, tipo); // 'ws' limpa quebras de linha e espaços do buffer

    cout << "Potencia (cv): ";
    cin >> potencia;

    cout << "Consumo: ";
    cin >> consumo;
}

