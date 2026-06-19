#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m[l][c];
		}
	}
	
	float s1=m[0][0]*m[1][1]*m[2][2]+
			m[0][1]*m[1][2]*m[2][0]+
			m[0][2]*m[1][0]*m[2][1];
	float s2=m[0][2]*m[1][1]*m[2][0]+
			m[0][1]*m[1][0]*m[2][2]+
			m[0][0]*m[1][2]*m[2][1];
	float det=s1-s2;
	
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
	int linhas=3;
	int colunas=3;
	
	m= new float*[linhas];
	
	for(int l=0; l<linhas; l++){
		m[l]= new float[colunas];
	}
	
	funcao(m,linhas,colunas);
	
	return 0;
}