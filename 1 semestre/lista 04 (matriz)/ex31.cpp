#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	float trans[linhas][colunas];
	
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			trans[c][l]= m[c][l];
		}
	}
	
	bool sime= true;
	
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			if(trans[c][l]!= m[l][c]){
			sime=false;
		 }
		}
	}
	 
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			cout << m[c][l] << "\t";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int l=0; l<colunas; l++){
		for(int c=0; c<linhas; c++){
			cout << trans[c][l] << "\t";
		}
		cout << endl;
	}
	
	if(sime){
		cout << "a matriz e simetrica.";
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