#include<iostream>
using namespace std;

void funcao(int quantidade){
	float num;
	float v1=0; float v2=0; float v3=0; 
	while(quantidade>0){
		cin >> num;
		if(num>v1){
			v3= v2;
			v2= v1;
			v1= num;
		}if(num>v2){
			v3= v2;
			v2= num;
		}if(num>v3){
			v3= num;
		}
		quantidade--;
	}
	float soma= v1+v2+v3;
	cout << "a soma dos 3 maiores e: " << soma;
}

int main (){
	int quantidade;
	
	cout << "digite a quantidade de numeros que deseja informar: ";
	cin >> quantidade;
	
	funcao(quantidade);
	
	return 0;
}