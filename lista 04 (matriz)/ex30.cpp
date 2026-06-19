#include<iostream>
using namespace std;

float funcao(float **m, int linhas, int colunas){
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cin >> m[l][c];
		}
	}
	
	float s1=m[0][0]*m[1][1]*m[2][2]+
			m[0][1]*m[1][2]*m[2][0]+
			m[0][2]*m[1][0]*m[2][1];
	float s2=m[0][2]*m[1][1]*m[2][0]+
			m[0][1]*m[1][0]*m[2][2]+
			m[0][0]*m[1][2]*m[2][1];
	float det=s1-s2;
	
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << m[l][c] << "\t";
		}
		cout << endl;
	}
	
	return det;
}

void inversa(float **m, int linhas, int colunas){
	float det=funcao(m,linhas,colunas);
	if(det == 0) {
        cout << "A matriz nao possui inversa!" << endl;
 		return;
    }

	float cof[3][3];
	
    cof[0][0] =  m[1][1]*m[2][2] - m[1][2]*m[2][1];
    cof[0][1] = -(m[1][0]*m[2][2] - m[1][2]*m[2][0]);
    cof[0][2] =  m[1][0]*m[2][1] - m[1][1]*m[2][0];

    cof[1][0] = -(m[0][1]*m[2][2] - m[0][2]*m[2][1]);
    cof[1][1] =  m[0][0]*m[2][2] - m[0][2]*m[2][0];
    cof[1][2] = -(m[0][0]*m[2][1] - m[0][1]*m[2][0]);

    cof[2][0] =  m[0][1]*m[1][2] - m[0][2]*m[1][1];
    cof[2][1] = -(m[0][0]*m[1][2] - m[0][2]*m[1][0]);
    cof[2][2] =  m[0][0]*m[1][1] - m[0][1]*m[1][0];
    
    float inv[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            inv[i][j] = cof[j][i] / det;
        }
    }

    cout << "\nMatriz inversa:\n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << inv[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
	float **m;
	int linhas=3;
	int colunas=3;
	
	m= new float*[linhas];
	
	for(int l=0; l<linhas; l++){
		m[l]= new float[colunas];
	}
	
	inversa(m,linhas,colunas);
	
	return 0;
}