#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		cout << "regiao " << l+1 << "\t  ";
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	float *medias= new float [colunas];
	float *estoque= new float[linhas];
	int alu;
	int maior=0;
	
	for(int l=0; l<linhas; l++){
		float soma=0;
		for(int c=0; c<colunas; c++){
			soma+= m[l][c];
		}
		medias[l]=soma/linhas;
		estoque[l]=soma;
	}
	
	for(int i=0; i<linhas; i++){
		cout << "total de vendas na regiao [" << i+1 << "]: " << estoque[i] << endl;
	}
	
		float *di= new float[colunas];
	
	for(int c=0; c<colunas; c++){
		for(int l=0; l<linhas; l++){
			di[c]+=m[l][c];
		}
	}
	
	for(int i=0; i<colunas; i++){
		cout << "semana [" << i+1 << "]: " << di[i] << endl;
	}
	

	int arma;
	int maior2=0;
	for(int c=0; c<colunas; c++){
		int soma=0;
		for(int l=0; l<linhas; l++){
			soma+=m[l][c];
		}
		
		if(c==0 or soma<maior2){
			maior2=soma;
			arma= c;
		}
	}
	cout << " o a semana com menos vendas e a " << arma+1 << endl;

			
	for(int i=0; i<colunas; i++){
		cout << "media da regiao [" << i+1 << "]: " << medias[i] << endl;
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
		cout << endl;
	}
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m[l][c];
		}
	}
	
	funcao(m,linhas,colunas);

	return 0;
}