#include<iostream>
using namespace std;

void funcao(int n){
	int idade;
	float soma = 0;
	
	for(int i= 1; i<=n; i++){
		cout << "idade " << i << ": ";
		cin >> idade;
		soma = soma + idade;
	}
	
	float media = soma/n;
	cout << "a media de idade e: " << media << endl;
	
	if(media<=25){
		cout << "a turma e jovem.";
	}else if(media<=60){
		cout << "a turma e adulta.";
	}else{
		cout << "a turma e idosa.";
	}
}

int main(){
	int n;
	cout << "quantas pessoas ha na sala: ";
	cin >> n;
	
	funcao(n);
	
	return 0;
}