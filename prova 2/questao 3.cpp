#include<iostream>
using namespace std;

void funcao(float *vetor1, float *vetor2, int tam){
	float soma=0;
	for(int i=0; i<tam; i++){
		vetor2[i]=vetor1[i]/3;
		soma+=vetor2[i];
	}
	float media=soma/tam;
	cout << "valores acima da media: " << endl;
	for(int i=0; i<tam; i++){
		if(vetor2[i]>media){
			cout << vetor2[i] << endl;
		}
	}
}

int main(){
	int tam;
	cout << "digite o tamanho dos vetores: ";
	cin >> tam;
	
	float *vetor1= new float[tam];
	float *vetor2= new float[tam];
	
	cout << "preencha o primeiro vetor: " << endl;
	for(int i=0; i<tam; i++){
		cout << "vetor[" << i << "] : ";
		cin >> vetor1[i];
	}
	
	funcao(vetor1,vetor2,tam);
	
	if(tam >= 2){
        cout << "Penultimo valor do vetor: " << vetor2[tam - 2];
    }
    else{
        cout << "O vetor nao possui penultimo elemento.";
    }

	
	return 0;
	
}