#include <iostream>
using namespace std;

void func(int *vetor1, int tam){
	int num=0;
	int tam2=0;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	for(int i = 0;i<tam;i++){
		if(vetor1[i] == num){
			tam2+=1;		
		}
	}
	
	int *vetor2 = new int [tam2];
	int x=0;
	
	for(int j=0;j<tam;j++){
			if(vetor1[j] == num){
				vetor2[x]=j;
				cout<<"O numero esta na posicao "<< vetor2[x]<< " do vetor"<<endl;
				x++;
		}
	}	
}

int main(){
	int tam1;
	int *vetor1= new int [tam1];
	
	cout<<"Digite o tamanho do vetor: ";
	cin>>tam1;
	
	for(int i=0; i<tam1;i++){
		cout<<"vetor "<<i<<": ";
		cin>>vetor1[i];
	}
	
	func(vetor1,tam1);
	
	return 0;
}