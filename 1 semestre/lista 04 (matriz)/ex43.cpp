#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		cout << "produto " << l+1 << "\t  ";
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	float *estoque= new float[linhas];
	int alu;
	int maior=0;
	for(int l=0; l<linhas; l++){
		float soma=0;
		for(int c=0; c<colunas; c++){
			soma+= m[l][c];
		}
		if(soma>maior){
			maior=soma;
			alu=l;
		}
		estoque[l]=soma;
	}
	
	for(int i=0; i<linhas; i++){
		cout << "estoque produto [" << i+1 << "]: " << estoque[i] << endl;
	}
	
	
	float *di= new float[colunas];
	
	for(int c=0; c<colunas; c++){
		for(int l=0; l<linhas; l++){
			di[c]+=m[l][c];
		}
	}
	
	for(int i=0; i<colunas; i++){
		cout << "armazem [" << i+1 << "]: " << di[i] << endl;
	}
	
	
	int arma;
	int maior2=0;
	for(int c=0; c<colunas; c++){
		int soma=0;
		for(int l=0; l<linhas; l++){
			soma+=m[l][c];
		}
		if(soma>maior2){
			maior2=soma;
			arma= c;
		}
	}
	cout << " o armazen com maior estoque e o " << arma+1 << endl;
	
	int prod=0;
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			if(m[l][c]==0){
				cout << "falta produto [" << l+1 << "] no armazem [" << c+1 << "]" << endl;
			}
		}
		
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