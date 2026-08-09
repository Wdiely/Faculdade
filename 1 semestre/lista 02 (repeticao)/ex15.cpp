#include<iostream>
using namespace std;

int conta(int a, int b){
	float conta= a;
	
	if(b==0){
		conta= 1;
	}else{
		for(int i=1; i<b ; i++){
		conta= conta * a;
	}
	}
	
	return conta;
}

int main(){
	int a, b;

	cout << "informe o valor de A: ";
	cin >> a;
	do{
		cout << "informe o valor de B: ";
		cin>> b;
		if(b<0){
			cout << "informe um numero positivo" << endl;
		}
	}while(b<0);
	
	cout << "A elevado a B e: " << conta(a,b);
	
	return 0;
}