#include <iostream>

using namespace std;

/*
Questão 3
Crie uma única função que receba como parâmetros dois vetores dinâmicos (ponteiros) de números reais e seus respectivos tamanhos.
Na mesma função:
a) Copie os elementos do vetor maior para o vetor menor até o limite possível.
b) Os índices do vetor menor que não puderem ser preenchidos devem receber o valor -1.0.
c) Em seguida, calcule a média dos elementos do vetor menor.

No main, solicite ao usuário os tamanhos dos vetores e os valores para o vetor maior.
Depois, chame a função e imprima o resultado da média no main.
*/

float mediaVetorMenor(float *menor, float *maior, int tamanho1, int tamanho2) {
	
	// Letra A
	for(int i = 0; i < tamanho1; i++) {
		menor[i] = maior[i];
	}
	
	// Letra B
	for(int i = tamanho2; i < tamanho1; i++) {
		menor[i] = -1.0;
	}
	
	// Letra C
	float soma = 0;
	for(int i = 0; i < tamanho1; i++) {
		soma += menor[i];
	}
	
	float media = soma / tamanho1;
	
	return media;
}

int main() {
	
	int tamanho1 = 0;
	int tamanho2 = 0;
	
	cout << "Informe o tamanho do vetor menor: ";
	cin >> tamanho1;
	
	cout << "Informe o tamanho do vetor maior: ";
	cin >> tamanho2;
	
	float *menor = new float[tamanho1];
	float *maior = new float[tamanho2];
	
	cout << "Insira os valores para o vetor maior!" << endl;
	
	for(int i = 0; i < tamanho2; i++) {
		cout << "vetor[" << i << "]: ";
		cin >> maior[i];
	}
	
	float media = mediaVetorMenor(menor, maior, tamanho1, tamanho2);
	cout << "A media dos elementos do menor vetor e: " << media << endl;
	
	return 0;
}