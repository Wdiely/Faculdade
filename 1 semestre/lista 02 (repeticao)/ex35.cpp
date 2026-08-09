#include<iostream>
using namespace std;

bool primo(int num){
	bool primo=true;
	
	if(num<=1){
		primo = false;
	}else{
	for(int i=2; i<num; i++){
		if(num%i==0){
			primo= false;
		}
	}
	}
	return primo;
}

void lista(int num){
	
	cout << "numeros primos: " << endl;
	
	for(int i=1; i<=num; i++){
		if(primo(i)){
			cout << i << endl;
		}
	}
}

int main(){
	int num;
	do{
	cout << "digite um numero inteiro: ";
	cin >> num;
		if(num>200){
			cout << "erro. o numero deve ser menor ou igual a 200." << endl;
		}
	}while(num>200);
	
	lista(num);
	
	return 0;
}