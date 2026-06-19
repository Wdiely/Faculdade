#include<iostream>
using namespace std;

void funcao(float **m, int linhas, int colunas){
	bool rep= false;
	for(int l1 = 0; l1 < linhas; l1++){
        for(int c1 = 0; c1 < colunas; c1++){

            for(int l2 = l1; l2 < linhas; l2++){

                int inicio = 0;
                if(l1 == l2)
                    inicio = c1 + 1;

                for(int c2 = inicio; c2 < colunas; c2++){

                    if(m[l1][c1] == m[l2][c2]){
                        rep= true;
                    }
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
	
	if(rep){
		cout << "ha numeros repetidos.";
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