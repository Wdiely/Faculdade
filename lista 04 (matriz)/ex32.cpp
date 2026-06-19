#include<iostream>
using namespace std;

void funcao(float **m, float **m2, int linhas, int colunas){
	float soma[linhas][colunas];
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			soma[l][c]=m[l][c]+m2[l][c];
		}
	}
	
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << soma[l][c] << "\t";
		}
		cout << endl;
	}
}

int main(){
	float **m, **m2;
	int linhas=0;
	int colunas=0;
	
	cout << "linhas: ";
	cin >> linhas;
	cout << "colunas: ";
	cin >> colunas;
	
	m= new float*[linhas];
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			m[l]= new float [colunas];
		}
	}
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m[l][c];
		}
	}
	
	m2= new float*[linhas];
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			m2[l]= new float [colunas];
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