#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	float *vetor= new float[colunas];
	
	for(int c=0; c<colunas; c++){
		for(int l=0; l<linhas; l++){
			vetor[c]+=m[l][c];
		}
	}
	
	for(int i=0; i<colunas; i++){
		cout << "media da coluna [" << i << "]: " << vetor[i]/linhas << endl;
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