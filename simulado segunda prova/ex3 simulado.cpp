#include<iostream>
using namespace std;

float funcao(float *vetormenor, float *vetormaior, int menor, int maior ){
	float soma=0;
	
	for(int i=0; i<menor; i++){
		vetormaior[i]=vetormenor[i];
		soma+=vetormaior[i];
	}
	while(menor<maior){
		vetormaior[menor]=5;
		soma+=vetormaior[menor];
		menor++;
	}
	
	return soma;
}

int main(){
	int menor, maior;
	float *vetormenor= new float[menor];
	float *vetormaior= new float[maior];
	
	cout << "informe o tamanho do vetor menor: ";
	cin >> menor;
	
	cout << "informe o tamanho do vetor maior: ";
	cin >> maior;
	
	float soma=0;
	
	for(int i=0; i<menor; i++){
		cout << "informe o valor " << i+1 << ": ";
		cin >> vetormenor[i];
		
		soma=funcao(vetormenor,vetormaior,menor,maior);
	}
	
	cout << "a soma e: " << soma;
	
	return 0;
}