#include<iostream>
using namespace std;

void funcao(int n){
	bool primo = true;
	
	if(n<2){
		primo = false;
	}else{
		
		for(int i=2; i<n; i++){
			if(n%i==0){
			primo = false;
			cout << "divisivel por: " << i << endl;
			}
		}
	}
	
	if(primo){
		cout << "o numero e primo.";
	}else{
		cout << "o numero nao e primo.";
	}
}

int main(){
	int n;
	cout << "informe um numero inteiro: ";
	cin >> n;
	
	funcao(n);
	
	return 0;
}