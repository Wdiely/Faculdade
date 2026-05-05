#include<iostream>
using namespace std;

void funcao(){
	float quantidade;
	int num;
	float maior=0;
	
	cout << "digite a quantidade de numeros que deseja informar: ";
	cin >> quantidade;
	
	while(quantidade>0){
		cout << "qual o numero desejado? ";
		cin >> num;
		if(num>maior){
			maior=num;	
		}
		quantidade--;
	}
	cout << "o maior e: " << maior;
}

int main (){
	funcao();
	return 0;
}