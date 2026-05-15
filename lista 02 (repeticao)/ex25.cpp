#include<iostream>
using namespace std;

int primos(int n){
	bool primo = true;
	
	if(n<2){
		primo = false;
	}else{
		
		for(int i=2; i<n; i++){
			if(n%i==0){
			primo = false;
			}
		}
	}
	return primo;
}

void funcao(int n){
	int i = 1;
	int soma = 0;
	cout << "esses sao os numeros primos: " << endl;
	while(i<=n){
		if(primos(i)){
		cout << i << endl;
	}
		soma += 1;
		i++;
	}
	cout << "foram realizadas " << soma << " divisoes.";
}

int main(){
	int n;
	cout << "informe um numero inteiro: ";
	cin >> n;
	
	funcao(n);
	
	return 0;
}