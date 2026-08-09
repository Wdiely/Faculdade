#include<iostream>
#include<math.h>

using namespace std;

void semana(int dia){
	switch(dia){
		case 1: {
			cout << "e domingo";
			break;
		}case 2: {
			cout << "e segunda feira";
			break;
		}case 3: {
			cout << "e terca-feira";
			break;
		}case 4: {
			cout << "e quarta-feira";
			break;
		}case 5: {
			cout << "e quinta-feira";
			break;
		}case 6: {
			cout << "e sexta-feira";
			break;
		}case 7: {
			cout << "e sabado";
			break;
		}default:{
			cout << "dia da semana invalido";
		}
	}
}
int main(){
	int dia;
	cout << "informe o dia da semana em numeros: ";
	cin >> dia;
	semana(dia);
	return 0;
}