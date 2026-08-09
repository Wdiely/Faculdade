#include<iostream>
using namespace std;

void funcao(int **m, int linhas, int colunas){
	int soma=0;
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			if(l<c){
				soma++;
			}
		}
		cout << endl;
	}
	
	cout << "quantidade de numeros: " << soma;
}

int main(){
	int **m;
	int linhas=0;
	int colunas=0;
	
	cout << "linhas: ";
	cin >> linhas;
	cout << "colunas: ";
	cin >> colunas;
	
	m= new int*[linhas];
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			m[l]= new int [colunas];
		}
	}
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m[l][c];
		}
	}
	
	funcao(m,linhas,colunas);
	
	return 0;
}