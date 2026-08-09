#include <iostream>

using namespace std;

/*
Questão 2
Escreva um programa que aceite somente números inteiros (INT) positivos maiores que 1 (CONDICIONAL LOOP).
Com esse número, calcule a soma dos números de 1 até ele utilizando uma função recursiva.
Se o número fornecido for menor ou igual a 1, repita o pedido até que seja fornecido um valor válido.
A função recursiva deve estar separada do main.
*/

int soma(int numero) {
	
	if(numero == 1) {
		return 1;
	} else {
		return numero + soma(numero - 1);
	}
}

int main() {
	
	int numero = 0;
	
	do {
		
		cout << "Informe o numero: ";
		cin >> numero;
		
		if(numero <= 1) {
			cout << "Use somente numeros inteiros e positivos maiores que 1!" << endl;
		}
		
	} while (numero <= 1);
	
	int resultado = soma(numero);
	cout << "A soma de 1 ate " << numero << " e: " << resultado << "!" << endl;
	
	return 0;
}