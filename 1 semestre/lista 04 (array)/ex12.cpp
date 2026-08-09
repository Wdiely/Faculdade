#include<iostream>
using namespace std;

void veri(string *nome, char *sexo, float *altura, int tam){
	float maior=0;
	float menor=0;
	
	float somaf=0, contf=0;
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=altura[i];
			menor=altura[i];
		}
		if(altura[i]>maior){
			maior=altura[i];
		}
		if(altura[i]<menor){
			menor=altura[i];
		}
		
		if(sexo[i]=='f'){
			contf+=1;
			somaf+=altura[i];
		}
		somatotal+=altura[i];
	}
	
	float mediaf=somaf/contf;
	float mediatotal=somatotal/tam;
	
	cout << "a media de altura feminina e: " << mediaf << endl;
	cout << "mulheres com altura acima da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(sexo[i]=='f'){
			if(altura[i]>mediaf){
				cout << nome[i] << ", com " << altura[i] <<endl;
			}
		}
	}
	
	cout << "a media de altura total e: " << mediatotal << endl;
	cout << "pessoas com altura acima da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(altura[i]>mediatotal){
			cout << nome[i] << ", com " << altura[i] <<endl;
		}
	}
	
	cout << "a maior altura e: " << maior << endl;
	cout << "a menor altura e: " << menor << endl;
}

int main(){
	int tam=50;
	string *nome= new string [tam];
	char *sexo= new char [tam];
	float *altura= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite seu nome: ";
		cin >> nome[i];
		cout << "digite seu sexo: (f- feminino, m-masculino)";
		cin >> sexo[i];
		cout << "digite sua altura: (em metros)";
		cin >> altura[i];
	}
	
	veri(nome, sexo, altura, tam);
	
	return 0;
}