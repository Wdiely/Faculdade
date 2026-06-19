#include<iostream>
using namespace std;

void linha(int **m, int linhas, int colunas){
    int maiorSoma = 0;
    int linhaMaior = 0;

    for (int l = 0; l < linhas; l++) {
        int soma = 0;

        for (int c = 0; c < colunas; c++) {
            soma += m[l][c];
        }

        if (l == 0 or soma > maiorSoma) {
            maiorSoma = soma;
            linhaMaior = l;
        }
    }

    cout << "Maior soma das linhas: " << maiorSoma << endl;
     cout << "linha: " << linhaMaior << endl;
}
void coluna(int **m, int linhas, int colunas){
    int maiorSoma = 0;
    int colunaMaior = 0;

    for (int c = 0; c < colunas; c++) {
        int soma = 0;

        for (int l = 0; l < linhas; l++) {
            soma += m[l][c];
        }

        if (c == 0 or soma > maiorSoma) {
            maiorSoma = soma;
            colunaMaior = c;
        }
    }

    cout << "Maior soma das colunas: " << maiorSoma << endl;
     cout << "coluna: " << colunaMaior << endl;
}

void troca(int **m, int linhas, int colunas){
	for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			if(m[l][c]>10){
				m[l][c]=10;
			}
		}
	}
}

int main(){
	int linhas = 6;
    int colunas = 7;

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
    linha(terreno,linhas,colunas);
    coluna(terreno,linhas,colunas);
    troca(terreno,linhas,colunas);
    
    for(int l=0; l<linhas; l++){
		for(int c=0; c<colunas; c++){
			cout << terreno[l][c] << "\t";
		}
		cout << endl;
	}
    
    return 0;
}