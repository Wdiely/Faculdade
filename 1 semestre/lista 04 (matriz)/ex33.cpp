#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	bool identidade= true;
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			if(c==l){
				if(m[l][c]!=1){
					identidade= false;
				}
			}else{
				if(m[l][c]!=0){
					identidade= false;
				}
			}
		}
	}
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	if(identidade){
		cout << "e uma matriz identidade.";
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