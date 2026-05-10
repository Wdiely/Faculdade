#include<iostream>
using namespace std;

void verificarIdade(int idade){
	while(idade>150 or idade<0){
		cout << "erro, sua idade tem que estar entre 0 e 150 anos." << endl;
		cout << "qual sua idade?";
		cin >> idade;
	}
}

void verificarSalario(float salario){
	while(salario<0){
		cout << "erro, seu salario tem  que ser maior que 0." << endl;
		cout << "qual seu salario?";
		cin >> salario;
	}
}

void verificarCivil(char opcao){
	while(opcao != 's' and opcao != 'c' and opcao != 'v' and opcao != 'd'){
		cout << "erro, seu estado civil tem que ser 's', 'c', 'v', 'd'." << endl;
		cout << "qual seu estado civil?";
		cin >> opcao;
	}
}

int main (){
	int idade;
	float salario;
	char estadoCivil;
	
	cout << "qual sua idade?";
	cin >> idade;
	verificarIdade(idade);
	
	cout << "qual seu salario?";
	cin >> salario;
	verificarSalario(salario);
	
	cout << "qual seu estado civil? ('s' solteiro(a), 'c' casado(a), 'v' viuvo(a), 'd' divorciado(a))";
	cin >> estadoCivil;
	verificarCivil(estadoCivil);
	
	return 0;
}