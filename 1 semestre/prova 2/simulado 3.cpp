#include<iostream>
using namespace std;

void funcao(float*vetor1, float*vetor2, int tam){
	float maior=0, menor=0;
	cout << "os valores armazzenados sao: " << endl;
	
	for(int i=0; i<tam; i++){
		vetor2[i]=vetor1[i]*vetor1[i];
		cout << "vetor [" << i << "] : " << vetor2[i] << endl;
		if(i==0){
			maior=vetor2[i];
			menor=vetor2[i];
		}if(vetor2[i]>maior){
			maior=vetor2[i];
		}if(vetor2[i]<menor){
			menor=vetor2[i];
		}
	}
	
	cout << "maior valor do vetor: " << maior << endl;
	cout << "menor valor do vetor: " << menor << endl;
	if(maior>menor*2){
		cout << "maior valor: " << maior;
	}
	
}

int main(){
	int tam;
	
	cout << "digite o tamanho dos vetores: ";
	cin >> tam;
	
	float *vetor1= new float [tam];
	float *vetor2= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite o valor do vetor [" << i << "]: ";
		cin >> vetor1[i];
	}
	
	funcao(vetor1,vetor2,tam);
	
	
	return 0;
	
}