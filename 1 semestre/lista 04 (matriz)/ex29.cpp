#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			cout << m[c][l] << "\t";
		}
		cout << endl;
	}
}

int main(){
	float **m;
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
	
	funcao(m,linhas,colunas);
	
	return 0;
}