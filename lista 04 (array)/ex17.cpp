#include<iostream>
using namespace std;

void veri(string *nome, int *cat, float *preco, int tam){
	float maior=0;
	float menor=0;
	
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=preco[i];
			menor=preco[i];
		}
		if(preco[i]>maior){
			maior=preco[i];
		}
		if(preco[i]<menor){
			menor=preco[i];
		}
		somatotal+=preco[i];
	}
	
	float mediatotal=somatotal/tam;
	
	cout << endl;
	cout << "a media de preco total e: " << mediatotal << endl;
	cout << "produtos com preco abaixo da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(preco[i]<mediatotal){
			cout << nome[i] << ", R$ " << preco[i] <<endl;
		}
	}
	cout << endl;
	
	float soma= 0;
	float cont= 0;
	
	for(int i=0; i<tam; i++){
		switch(cat[i]){
			case 5:
				soma+=preco[i];
				cont+=1;
				break;	
		}
	}
	cout << endl;
	
	float mediasetor= soma/cont;
	
	cout << "media setor 5: " << mediasetor << endl;
	cout << "produtos acima da media do setor 5: " << endl;
	for(int i=0; i<tam; i++){
		if(cat[i]==5 and preco[i]>mediasetor){
			cout << nome[i] << ", R$ " << preco[i] << endl;
		}
	}
	
	cout << endl;
	
	cout << "a maior preco e: " << maior << endl;
	cout << "a menor preco e: " << menor << endl;
}

int main(){
	int tam=50;
	string *nome= new string [tam];
	int *cat= new int [tam];
	float *preco= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite o nome do produto: ";
		cin >> nome[i];
		cout << "digite sua categoria: (de 1 a 10)";
		cin >> cat[i];
		cout << "digite seu preco: ";
		cin >> preco[i];
	}
	
	veri(nome, cat, preco, tam);
	
	return 0;
}