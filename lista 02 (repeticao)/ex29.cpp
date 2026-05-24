#include<iostream>
using namespace std;

void funcao(int quntidade){
	float valor;
	float soma=0;
	
	for(int i=1; i<=quntidade; i++){
		do{
			cout << "qual o valor do CD " << i << "? ";
			cin >> valor;
			if(valor>=0){
				soma= soma + valor;
			}else{
				cout << "erro. o valor nao pode ser menor que 0." << endl;
			}
		}while(valor<0);
	}
	
	float media= soma/quntidade;
	cout << "o valor medio investido por CD foi: " << media;
}

int main(){
	int CDs;
	cout << "quantas CDs foram comprados? ";
	cin >> CDs;
	
	funcao(CDs);
	
	return 0;
}