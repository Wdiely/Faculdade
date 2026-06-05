#include<iostream>
using namespace std;

void funcao(int *num, float *altura, int tam){
	float alto=0, baixo=0;
	int numeroa= 0;
	int numerob=0;
	
	float soma=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			alto=altura[i];
			baixo=altura[i];
			numeroa=num[i];
			numerob=num[i];
		}
		if(altura[i]>alto){
			alto=altura[i];
			numeroa=num[i];
		}
		if(altura[i]<baixo){
			baixo=altura[i];
			numerob=num[i];
		}
		soma+=altura[i];
	}
	cout << endl;
	cout << "o numero do mais alto e: " << numeroa << ", com " << alto << "cm." << endl;
	cout << "o numero do mais baixo e: " << numerob << ", com " << baixo << "cm." << endl;
	cout << endl;
	
	float media=soma/tam;
	cout << "a media de altura e: " << media;
	
}

int main(){
	int tam=3;
	int *num= new int [tam];
	float *altura= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "qual o seu numero de aluno? ";
		cin >> num[i];
		cout << "qual a sua altura em centimetros? ";
		cin >> altura[i];
	}
	
	funcao(num,altura,tam);
	
	return 0;
}