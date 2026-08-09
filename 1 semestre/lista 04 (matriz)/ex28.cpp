#include <iostream>
using namespace std;

void piscina(int **m, int linhas, int colunas){
	int borda=0;
	for (int l = 2; l < linhas; l++) {
	        for (int c = 3; c < colunas; c++) {
	            if(m[l][c]>borda){
	            	borda=m[l][c];
				}
			}
    }
    int nivel=borda-5;
    int terra=0;
    for (int l = 2; l < linhas; l++) {
	        for (int c = 3; c < colunas; c++) {
	            if(m[l][c]>=nivel){
	            	terra+=m[l][c]-nivel;
				}
			}
    }
    
    cout << "quantidade de terra retirada para piscina: " << terra << endl;

}

void planagem(int **m, int linhas, int colunas){
	int terraretirada=0;
	int terracolocada=0;
	 for (int l = 2; l < linhas; l++) {
	        for (int c = 3; c < colunas; c++) {
	            	if(m[l][c]>=10){
					terraretirada+=m[l][c]-10;
	            }else{
	            	terracolocada+=10-m[l][c];
				}
	        }
    }
    
    cout << "quantidade de terra retirada: " << terraretirada << endl;
    cout << "quantidade de terra colocada: " << terracolocada << endl;
}
int main(){
    int linhas = 6;
    int colunas = 6;

    int** terreno = new int*[linhas];
    for (int i = 0; i < linhas; i++) {
        terreno[i] = new int[colunas];
    }

    int valores[6][7] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
    };

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            terreno[i][j] = valores[i][j];
        }
    }
    
    piscina(terreno, linhas,colunas);
    planagem(terreno,linhas,colunas);
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << terreno[i][j] << "\t";
        }
        cout << endl;
    }
    
	return 0;
}