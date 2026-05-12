#include<iostream>
using namespace std;

void funcao(int n){
	float num = 0;
	float maior = 0;
	float menor = 999999;
	float soma = 0;
	
	for(int i= 1; i<=n; i++){
		cout << "digite um dos numeros: ";
		cin>> num;
		
		soma += num;
		
		if(num > maior){
			maior = num;
		}if(num < menor){
			menor = num;
		}
	}
	cout << "o maior numero e: " << maior << endl;
	cout << "o menor numero e: " << menor << endl;
	cout << "a soma dos numeros e: " << soma << endl;
}

int main(){
	int n;
	do{
		cout << "quantos numeros deseja digitar? ";
		cin >> n;
		
		if(n>=1000 or n<=0){
			cout << "erro. o numero deve estar entre 0 e 1000." << endl;
		}
	}while(n>=1000 or n<=0);
	
	funcao(n);
	
	return 0;
}