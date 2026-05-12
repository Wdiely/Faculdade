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
	int resp;
	
	do{
		
	do{
		cout << "digite um numero inteiro positivo: ";
		cin >> num;
		if(num<=0 or num>=16){
			cout << "erro, o numero nao pode ser negativo.";
		}
	}while(num<=0 or num>=16);
	cout << "o fatorial desse nuemro e: " << fatorial(num) << endl;
	
	cout << "deseja fazer o calculo novamente? (1- sim, 2- nao) ";
	cin >> resp;
	
	}while(resp==1);
	
	return 0;       
}