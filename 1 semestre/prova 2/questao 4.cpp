#include<iostream>
using namespace std;

int fatorial(int n){
	if(n<0 or n>10){
		return 0;
	}if(n==0){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}

void funcao(int *vetor, int tam){
	for(int i=0; i<tam; i++){
		vetor[i]=fatorial(i+1);
	}
}

int main(){
	int tam=10;
	int *vetor=new int[tam];
	
	funcao(vetor,tam);
	
	int num=0;
	do{
		cout << "digite um numero: ";
		cin >> num;
		if(num<1 or num>10){
			cout << "valor nao armazenado." << endl;
		}
	}while(num<1 or num>10);
	
	cout << "o faotrial desse numero e: " << vetor[num-1];
	
	return 0;
}