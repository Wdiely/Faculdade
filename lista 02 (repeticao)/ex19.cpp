#include<iostream>
using namespace std;

int fatorial(int num){
	int resul= 1;
	for(int i= 1; i<=num; i++){
		resul= resul * i;
	}
	return resul;
}

int main(){
	int num;
	do{
		cout << "digite um numero inteiro positivo: ";
		cin >> num;
		if(num<0){
			cout << "erro, o numero nao pode ser negativo.";
		}
	}while(num<0);
	
	cout << fatorial(num);
	
	return 0;
}