#include <iostream>
#include "Motor.h"

using namespace std;


Motor::Motor() {
    tipo = "";
    potencia = 0.0;
    consumo = 0.0;
}

Motor::Motor(string tipo, double potencia, double consumo) {
    this->tipo = tipo;
    this->potencia = potencia;
    this->consumo = consumo;
}

void Motor::setTipo(string tipo) {
    this->tipo = tipo;
}
void Motor::setPotencia(double potencia) {
    this->potencia = potencia;
}
void Motor::setConsumo(double consumo) {
    this->consumo = consumo;
}

string Motor::getTipo() const {
    return this->tipo;
}
double Motor::getPotencia() const {
    return this->potencia;
}
double Motor::getConsumo() const {
    return this->consumo;
}

void Motor::preencher() {
    cout << "Tipo do motor (eletrico, gasolina, diesel): ";
    cin >>tipo;

    cout << "Potencia (cv): ";
    cin >> potencia;

    cout << "Consumo: ";
    cin >> consumo;
}