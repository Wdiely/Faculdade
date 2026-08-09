#include<iostream>
using namespace std;

void funcao(int **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	int somadp=0;
	int somads=0;

	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			if(l==c){
				somadp+=m[l][c];
			}
			if(l+c==linhas-1){
				somads+=m[l][c];
			}
		}
	}
	
	cout << "soma da diagonal principal: " << somadp << endl;
	cout << "soma da diagonal secundaria: " << somads << endl;
	
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