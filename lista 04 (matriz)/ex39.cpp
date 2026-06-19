#include<iostream>
using namespace std;

void funcao(int **m, int **m2, int linhas, int colunas){
	bool igual=true;
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			if(m[l][c]!=m2[l][c]){
				igual=false;
			}
		}
	}
	
	
	if(igual){
		cout << "sao iguais.";
	}
}

int main(){
	int **m, **m2;
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
	
	m2= new int*[linhas];
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			m2[l]= new int [colunas];
		}
	}
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m2[l][c];
		}
	}
	
	funcao(m,m2,linhas,colunas);
	
	return 0;
}