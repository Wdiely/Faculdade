#include<iostream>
using namespace std;

int funcao(int n1, int n2){
	int elevacao=n1;
	if(n2<=9){
		for(int i=1; i<n2; i++){
			elevacao*=n1;
		}
		return elevacao;
	}else{
		return 0;
	}
}

int main(){
	int vezes;
	cout << "quantas vezes deseja executar a funcao? ";
	cin >> vezes;
	int *vetor=new int [vezes];
	
	for(int i=1; i<=vezes; i++){
		int n1, n2;
		cout << "informe o primeiro numero : ";
		cin >> n1;
		cout << "informe o segundo numero : ";
		cin >> n2;
		
		cout << "o  primeiro numero elevado ao segundo e: " << funcao(n1,n2) << endl;

		vetor[i]=funcao(n1,n2);
	}
	for(int i=1; i<=vezes; i++){
		cout << "vetor [" << i << "] : " << vetor[i] << endl;
	}
	return 0;
}
