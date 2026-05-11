#include<iostream>
using namespace std;

void funcao(){
	int num;
	int pares = 0;
	int impares = 0;
	
	for(int i=0; i<10; i++){
		cout << "informe um numero inteiro: ";
		cin >> num;
		if(num%2==0){
			pares = pares + 1;
		}else{
			impares = impares + 1;
		}
	}
	cout << "a quantidade de numeros pares e: " << pares << endl;
	cout << "a quantidade de numeros impares e: " << impares;
}

int main(){
	
	funcao();
	
	return 0;
}