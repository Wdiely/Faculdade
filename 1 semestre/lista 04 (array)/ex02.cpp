#include<iostream>
using namespace std;

int main(){
    int vetor[20];
    
    int maior=0;
    int posicao=0;
    
    for(int i=0; i<20; i++){
        
        do{cout << "indique o numero " << i+1 << ": ";
        cin >> vetor[i];
        if(vetor[i]<0)
        cout << "erro. o numero deve ser positivo.";
        }while(vetor[i]<0);
        
        if(i==0)
        maior= vetor[i];
        posicao= i;
        if(vetor[i]>maior)
        maior= vetor[i];
        posicao= i;
    }
    
    cout << "o maior numero e: " << maior << endl;
    cout << "a posicao dele e vetor " << "[" << posicao << "]";
    return 0;
    
}