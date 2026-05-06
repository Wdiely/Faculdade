#include<iostream>
using namespace std;

void funcao(float num1, float num2){
	float soma =0;
	if(num1<num2){
		while(num1<num2){
		cout << num1 << endl;
		soma = soma + num1;
			if(num1==num2){
				break;
			}
		num1++;
}
}
	else {
		while(num1>num2){
		cout << num2 << endl;
		soma = soma + num2;
			if(num1==num2){
				break;
			}
		num2++;
	}
}
	cout << "a soma e: " << soma;
}

int main (){
	float num1, num2;
	
	cout << "digite 2 numeros: ";
	cin >> num1 >> num2;
	
	funcao(num1, num2);
	
	return 0;
}
