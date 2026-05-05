#include<iostream>
using namespace std;

void funcao(int quantidade){	
	float num;
	float soma=0;
	
	int n = quantidade;
	
	while(quantidade>0){
		cout << "qual o numero desejado? ";
		cin >> num;
		soma= soma + num;
		quantidade--;
	}
	float media=soma/n;
	cout << "a soma e: " << soma << endl;
	cout << "a media e: " << media;
}

int main (){
	int quantidade;
	
	cout << "digite a quantidade de numeros que deseja informar: ";
	cin >> quantidade;
	
	funcao(quantidade);
	return 0;
}