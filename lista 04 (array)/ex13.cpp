#include<iostream>
using namespace std;

void funcao(float *notas, int tam){
	float freq=0;
	
	int *abso= new int [tam];
	float *rela= new float [tam];
	
	for(int i=0; i<tam; i++){
	    freq = 0;
	    for(int j=0; j<tam; j++){
	        if(notas[i] == notas[j]){
	            freq++;
	        }
	    }
	    abso[i] = freq;
	    rela[i] = (float)freq / tam;
	}
	
	for(int i=0; i<tam; i++){
		cout << "frequencia absoluta da nota " << notas[i] << ": " << abso[i] << endl;
		cout << "frequencia relativa da nota " << notas[i] << ": " << rela[i] << endl;
	}
}

int main(){
	int tam=5;
	float *notas= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite uma nota: (de 0 a 10)";
		cin >> notas[i];
	}
	
	funcao(notas,tam);
	
	return 0;
}