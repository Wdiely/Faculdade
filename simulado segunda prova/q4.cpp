#include <iostream>

using namespace std;

/*
Questão 4
a) Crie uma função que receba dois inteiros como parâmetros. A função deve realizar a divisão inteira sucessiva do primeiro número por ele mesmo, a quantidade de vezes indicada pelo segundo número.
Se o segundo número for maior que 6, a função deve retornar -1.

b) No main, pergunte quantas vezes o usuário deseja executar a função da letra a.
Execute a função a quantidade de vezes solicitada e armazene os resultados em um vetor dinâmico.

Ao final, imprima todos os valores armazenados.
*/

int funcaoA(int numero1, int numero2) {
	
	if(numero2 > 6) {
		return -1;
	}
	
	int auxiliar = numero1;
	
	for (int i = 0; i < numero2; i++) {
		
		if(numero1 == 0) {
			return 0;
		}
		
		auxiliar = auxiliar / numero1;
	}
	
	return auxiliar;
}

int main() {
	
	int numero = 0;
	
	cout << "Quanas vezes voce quer uar a funcaoA: ";
	cin >> numero;
	
	int *resultados = new int[numero];
	
	int numero1 = 0;
	int numero2 = 0;
	
	for (int i = 0; i < numero; i++) {
	
		cout << "Infome o numero 1:";
		cin >> numero1;	
		
		cout << "Infome o numero 2:";
		cin >> numero2;
		
		resultados[i] = funcaoA(numero1, numero2);
	}
	
	cout << "Valores armazenados:" << endl;
	for (int i = 0; i < numero; i ++) {
		cout << resultados[i] << endl;
	}
	
	
	return 0;
}