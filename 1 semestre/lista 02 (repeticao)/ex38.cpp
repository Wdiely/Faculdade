#include<iostream>
using namespace std;

void salario(float inicial){
	double per= 1.5;
	double salario= inicial;
	
	salario = salario * (1 + per/100);

	for(int i=1997; i<=2026; i++){
		per= per * 2;
		salario = salario * (1+per/100);
	}
	
	cout << "salario final em 2026: " << salario;
}

int main(){
	float inicial;
	cout << "digite o salario inicial: ";
	cin >> inicial;
	
	salario(inicial);
	
	return 0;
}