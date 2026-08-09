/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: wdiely
 *
 * Created on 9 de Agosto de 2026, 09:13
 */

#include <cstdlib>
#include <iostream>
#include "carro.h"
#include "Livro.h"
#include "Motor.h"
using namespace std;

/*
 * 
 */

// a) Verifica quais carros possuem motorização acima de 1.0
void verificarmotorizacaoacima1(const carro carros[], int tamanho) {
    cout << "\n=== CARROS COM MOTORIZACAO ACIMA DE 1.0 ===" << endl;
    bool encontrou = false;
    for (int i = 0; i < tamanho; i++) {
        if (carros[i].getmotor() > 1.0) {
            cout << "- " << carros[i].getnome() 
                 << " (" << carros[i].getmotor() << ")" << endl;
            encontrou = true;
        }
    }
    if (!encontrou) {
        cout << "Nenhum carro com motorizacao acima de 1.0 encontrado." << endl;
    }
}

// b) Verifica e informa se há carros da mesma marca
void verificarmesmamarca(const carro carros[], int tamanho) {
    cout << "\n=== COMPARAÇÃO DE MARCAS ===" << endl;
    bool houveigualdade = false;

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (carros[i].getmarca() == carros[j].getmarca()) {
                cout << "- " << carros[i].getnome() << " e " 
                     << carros[j].getnome() << " sao da mesma marca (" 
                     << carros[i].getmarca() << ")." << endl;
                houveigualdade = true;
            }
        }
    }

    if (!houveigualdade) {
        cout << "Todos os carros pertencem a marcas diferentes." << endl;
    }
}

// c) Calcula a porcentagem a mais do carro mais caro em relação aos demais
void calculardiferencaporcentagemmaiscaro(const carro carros[], int tamanho) {
    cout << "\n=== DIFERENCA DE PRECO DO MAIS CARO ===" << endl;
    
    int idxmaiscaro = 0;
    for (int i = 1; i < tamanho; i++) {
        if (carros[i].getvalor() > carros[idxmaiscaro].getvalor()) {
            idxmaiscaro = i;
        }
    }

    cout << "Carro mais caro: " << carros[idxmaiscaro].getnome() 
         << " (R$ " << carros[idxmaiscaro].getvalor() << ")\n" << endl;

    for (int i = 0; i < tamanho; i++) {
        if (i != idxmaiscaro) {
            if (carros[i].getvalor() > 0) {
                double perc = ((carros[idxmaiscaro].getvalor() - carros[i].getvalor()) / carros[i].getvalor()) * 100.0;
                cout << "- O " << carros[idxmaiscaro].getnome() << " eh " 
                     << perc << "% mais caro que o " << carros[i].getnome() 
                     << " (R$ " << carros[i].getvalor() << ")." << endl;
            } else {
                cout << "- O carro " << carros[i].getnome() << " tem valor R$ 0.00." << endl;
            }
        }
    }
}
int main() {
    carro carros[3];

    cout << "=== CADASTRO DE 3 CARROS ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\n--- Preenchendo Carro " << (i + 1) << " ---" << endl;
        carros[i].preencher();
    }

    cout << "\n=== CARROS CADASTRADOS ===" << endl;
    for (int i = 0; i < 3; i++) {
        carros[i].imprimir();
    }
    
    verificarmotorizacaoacima1(carros, 3);
    verificarmesmamarca(carros, 3);
    calculardiferencaporcentagemmaiscaro(carros, 3);
    
    
    Livro livro1;
    Livro livro2;

    cout << "=== CADASTRO DO LIVRO 1 ===" << endl;
    livro1.preencher();

    cout << "\n=== CADASTRO DO LIVRO 2 ===" << endl;
    livro2.preencher();

    cout << "\n=== COMPARAÇÃO ===" << endl;

    if (livro1.getNumeroPaginas() > livro2.getNumeroPaginas()) {
        cout << "O livro com maior numero de paginas eh: \"" 
             << livro1.getTitulo() << "\" (" 
             << livro1.getNumeroPaginas() << " paginas)." << endl;
    } else if (livro2.getNumeroPaginas() > livro1.getNumeroPaginas()) {
        cout << "O livro com maior numero de paginas eh: \"" 
             << livro2.getTitulo() << "\" (" 
             << livro2.getNumeroPaginas() << " paginas)." << endl;
    } else {
        cout << "Ambos os livros possuem a mesma quantidade de paginas (" 
             << livro1.getNumeroPaginas() << " paginas)." << endl;
    }
    
    Motor motor1;
    Motor motor2;

    cout << "=== CADASTRO DO MOTOR 1 ===" << endl;
    motor1.preencher();

    cout << "\n=== CADASTRO DO MOTOR 2 ===" << endl;
    motor2.preencher();

    cout << "\n=== COMPARAÇÃO DE POTÊNCIA ===" << endl;

    if (motor1.getPotencia() > motor2.getPotencia()) {
        cout << "O Motor 1 (" << motor1.getTipo() << ") possui maior potencia: " 
             << motor1.getPotencia() << " cv." << endl;
    } else if (motor2.getPotencia() > motor1.getPotencia()) {
        cout << "O Motor 2 (" << motor2.getTipo() << ") possui maior potencia: " 
             << motor2.getPotencia() << " cv." << endl;
    } else {
        cout << "Ambos os motores possuem a mesma potencia (" 
             << motor1.getPotencia() << " cv)." << endl;
    }

    return 0;
}

