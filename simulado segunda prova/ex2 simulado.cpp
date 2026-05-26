#include<iostream>
using namespace std;

int funcao(int num){
	if(num==0)
	return 1;
	else
	return num * funcao(num-1);
}

int main(){
	int num;
	
	do{
		cout << "informe um numero: ";
		cin >> num;
		
		if(num<=0){
			cout << "o valor digitado deve ser maior que zero." << endl;
		}
	}while(num<=0);
	
	
	cout << "o fatorial desse numero e: " << funcao(num) << endl;
	
	return 0;
	
}