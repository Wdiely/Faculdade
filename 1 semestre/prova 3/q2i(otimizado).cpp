#include <iostream>
using namespace std;

int funcaoA(int **m, int tam){
    int cont=0;

    for(int l=1; l<tam; l+=2){
        for(int c=0; c<tam; c++){
            if(m[l][c]>0)
                cont++;
        }
    }
    return cont;
}

int funcaoB(int **m, int tam){
    int soma=0;
    for(int i=0; i<tam; i++){
        soma+=m[i][i];
    }
    return soma;
}

int funcaoC(int **m, int tam){
    int produto=1;
    for(int i=0; i<tam; i++){
        produto*=m[i][tam-1-i];
    }
    return produto;
}

bool funcaoD(int **m1, int **m2, int tam){
    if(funcaoB(m1,tam)>funcaoC(m2,tam))
        return true;
    else
		return false;
}

int funcaoE(int **m, int tam, int num){
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            if(m[l][c]==num)
                return l;
        }
    }
    return -1;
}

void funcaoF(int **m, int tam, int c1, int c2){
    for(int l=0; l<tam-1; l++){
        m[l][c1]=m[l][c2];
    }

}

void preencher(int **m, int tam){
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            cin>>m[l][c];
        }
    }
}

void mostrar(int **m, int tam){
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            cout<<m[l][c]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int tam=3;

    int **m1=new int*[tam];
    int **m2=new int*[tam];

    for(int i=0;i<tam;i++){
        m1[i]=new int[tam];
        m2[i]=new int[tam];
    }

    cout<<"Matriz 1"<<endl;
    preencher(m1,tam);

    cout<<"Matriz 2"<<endl;
    preencher(m2,tam);

    cout<<"Positivos nas linhas impares: "<<funcaoA(m1,tam)<<endl;
    cout<<"Soma diagonal principal: "<<funcaoB(m1,tam)<<endl;
    cout<<"Produto diagonal secundaria: "<<funcaoC(m1,tam)<<endl;

    if(funcaoD(m1,m2,tam))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    int numero;

    cout<<"Digite um numero: ";
    cin>>numero;

    cout<<"Primeira linha onde aparece: "<<funcaoE(m1,tam,numero)<<endl;

    int col1,col2;

    cout<<"Digite a coluna que sera sobrescrita: ";
    cin>>col1;
    cout<<"Digite a coluna que sera copiada: ";
    cin>>col2;

    funcaoF(m1,tam,col1,col2);

    cout<<"Matriz apos funcao F"<<endl;

    mostrar(m1,tam);

    return 0;
}