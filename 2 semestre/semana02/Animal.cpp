#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(){
	especie = "";
    raca = "";
    idade = 0;
    peso = 0;
}
Animal::Animal(const Animal &outro){
	especie = outro.especie;
    raca = outro.raca;
    idade = outro.idade;
    peso = outro.peso;
}
string Animal::getEspecie() {
    return especie;
}

string Animal::getRaca() {
    return raca;
}

int Animal::getIdade() {
    return idade;
}

float Animal::getPeso() {
    return peso;
}

void Animal::setEspecie(string especie) {
    this->especie = especie;
}

void Animal::setRaca(string raca) {
    this->raca = raca;
}

void Animal::setIdade(int idade) {
    this->idade = idade;
}

void Animal::setPeso(float peso) {
    this->peso = peso;
}

void Animal::preencher() {
    cout << "Digite a especie: ";
    cin >> especie;

    cout << "Digite a raca: ";
    cin >> raca;

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite o peso: ";
    cin >> peso;
}

void Animal::imprimir() {
    cout << "Especie: " << especie << endl;
    cout << "Raca: " << raca << endl;
    cout << "Idade: " << idade << endl;
    cout << "Peso: " << peso << " kg" << endl;
}

void Animal::copiar(const Animal &outro) {
    especie = outro.especie;
    raca = outro.raca;
    idade = outro.idade;
    peso = outro.peso;
}