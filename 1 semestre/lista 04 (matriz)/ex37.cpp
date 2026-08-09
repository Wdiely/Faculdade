#include<iostream>
using namespace std;

void funcao(int **m, int linhas, int colunas){
	
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			if(m[c][l]%2==0){
				cout << m[c][l] << "\t";
			}else{
				cout << m[c][l]*-1 << "\t";
			}
		}
		cout << endl;
	}
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