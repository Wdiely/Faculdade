#include<iostream>
#include<math.h>
using namespace std;

void peso(float altura, char sexo){
	
	float homem= (72.7 * altura) - 58.0;
	float mulher= (62.1 * altura) - 44.7;
	
	if(sexo='F'){
		cout << "seu peso ideal e: " << mulher;
	}else{
		cout << "seu peso ideal e: " << homem;
	}
}

int main (){
	float altura;
	char sexo;
	
	cout << "qual o seu sexo? (F-feminino // M-masculino) ";
	cin >> sexo;
	cout << "qual sua altura? (em metros) ";
	cin >> altura;
	
	peso(altura,sexo);
	return 0;
}