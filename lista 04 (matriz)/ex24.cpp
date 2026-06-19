#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m[l][c];
		}
	}
	
	float det=m[0][0]*m[1][1]-m[0][1]*m[1][0];
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	cout << "determinante: " << det;
}

int main(){
	float **m;
	int linhas=2;
	int colunas=2;
	
	m= new float*[linhas];
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			m[l]= new float [colunas];
		}
	}
	
	
	funcao(m,linhas,colunas);
	
	return 0;
}