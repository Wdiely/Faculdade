#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		cout << "aluno " << l+1 << "\t";
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
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
	}
	
	cout << " o aluno com maior media e o " << alu+1 << endl;
	
	float *di= new float[colunas];
	
	for(int c=0; c<colunas; c++){
		for(int l=0; l<linhas; l++){
			di[c]+=m[l][c];
		}
	}
	
	for(int i=0; i<colunas; i++){
		cout << "media da diciplina [" << i+1 << "]: " << di[i]/linhas << endl;
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