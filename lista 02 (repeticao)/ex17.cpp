#include<iostream>
using namespace std;

void funcao(int n){
	
}

int main(){
	int n;
	do{
	cout << "digite um nuemro inteiro positivo: ";
	cin >> n;
	if(n<0){
		cout << "erro, o valor nao poe ser negativo. " << endl;
	}
	}while(n<0);
	
	funcao(n);
	
	return 0;
}
