#include <cstdlib>
#include <iostream>
#include "Carro.h"
#include "Livro.h"
#include "Motor.h"
using namespace std;

void verificarmotorizacaoacima1(Carro *carros, int tam){
	cout << "carros com motorizacao maior que 1.0: " << endl;
	for(int i=0; i<tam; i++){
		if(carros[i].getmotor()>1.0){
			cout << carros[i].getnome() << endl;
		}
	}
}

void verificarmesmamarca(Carro *carros, int tam){
	cout << "carros com a mesma marca: " << endl;
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			if(carros[i].getmarca()==carros[j+1].getmarca()){
				cout << carros[i].getnome() << " e " << carros[j+1].getnome() << endl;
			}
		}
	}
}

void calculardiferencaporcentagemmaiscaro(Carro *carros, int tam){
	float maior=0;
	int caro=0;
	for(int i=0; i<tam; i++){
		if(carros[i].getvalor()>maior){
			caro=i;
			maior=carros[i].getvalor();
		}
	}
	
	for (int i = 0; i < tam; i++) {
            if (carros[i].getvalor() > 0) {
                double perc = ((carros[caro].getvalor() - carros[i].getvalor()) / carros[i].getvalor()) * 100.0;
                cout << "- O " << carros[caro].getnome() << " e " 
                     << perc << "% mais caro que o " << carros[i].getnome() 
                     << " (R$ " << carros[i].getvalor() << ")." << endl << endl;
            } else {
                cout << "- O carro " << carros[i].getnome() << " tem valor R$ 0.00." << endl << endl;
            }
    }
}

int main() {
	Carro carros[3];

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
    
    
	Livro livros[2];
    
    for(int i=0; i<2; i++){
    	livros[i].preencher();
	}
	
	if(livros[1].getNumeroPaginas()>livros[2].getNumeroPaginas()){
		cout << "o livro "<< livros[1].getTitulo() <<" tem mais paginas." << endl << endl;
	}else if(livros[1].getNumeroPaginas()<livros[2].getNumeroPaginas()){
		cout << "o livro "<< livros[2].getTitulo() <<" tem mais paginas." << endl << endl;
	}else{
		cout << "os livros possuem o mesmo numero de paginas." << endl << endl;
	}
	
	
	Motor Motors[2];
    
    for(int i=0; i<2; i++){
    	Motors[i].preencher();
	}
	
	if(Motors[1].getPotencia()>Motors[2].getPotencia()){
		cout << "o motor "<< Motors[1].getTipo() <<" tem mais potencia." << endl << endl;
	}else if(Motors[1].getPotencia()<Motors[2].getPotencia()){
		cout << "o motor "<< Motors[2].getTipo() <<" tem mais potencia." << endl << endl;
	}else{
		cout << "os motores possuem a mesma potencia." << endl << endl;
	}
	
    return 0;
}