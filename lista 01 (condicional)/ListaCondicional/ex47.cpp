#include<iostream>
#include<math.h>
using namespace std;

void funcao(float indice){
	if(indice>=0.0 && indice<0.3)
	cout << "indice aceitavel";
	else if(indice>=0.3 && indice<0.4)
	cout << "ALERTA: as industrias do PRIMEIRO GRUPO deve suspender imediatamente suas atividades";
	else if(indice>=0.4 && indice<0.5)
	cout << "ALERTA: as industrias do PRIMEIRO E DO SEGUNDO GRUPO devem suspender imediatamente suas operacoes";
	else if(indice>=0.5)
	cout << "ALERTA: TODAS AS INDUSTRIAS DOS TRES GRUPOS devem suspender imediatamente suas operacoes";
	
}

int main(){
	float indice;
	cout << "Qual o indice de poluicao atual? ";
	cin >> indice;
	
	funcao(indice);
	return 0;
}