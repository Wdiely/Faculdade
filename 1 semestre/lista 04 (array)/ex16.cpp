#include<iostream>
using namespace std;

void veri(string *nome, int *cod, float *salario, int tam){
	float maior=0;
	float menor=0;
	
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=salario[i];
			menor=salario[i];
		}
		if(salario[i]>maior){
			maior=salario[i];
		}
		if(salario[i]<menor){
			menor=salario[i];
		}
		somatotal+=salario[i];
	}
	
	float mediatotal=somatotal/tam;
	
	cout << endl;
	cout << "a media de salario total e: " << mediatotal << endl;
	cout << "pessoas com salario abaixo da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(salario[i]<mediatotal){
			cout << nome[i] << ", com " << salario[i] <<endl;
		}
	}
	cout << endl;
	
	float *soma= new float[6] {0};
	float *cont= new float[6] {0};
	float *mediasetor= new float[6] {0};
	
	for(int i=0; i<tam; i++){
		switch(cod[i]){
			case 0:
				soma[0]+=salario[i];
				cont[0]+=1;
				break;
			case 1:
				soma[1]+=salario[i];
				cont[1]+=1;
				break;
			case 2:
				soma[2]+=salario[i];
				cont[2]+=1;
				break;
			case 3:
				soma[3]+=salario[i];
				cont[3]+=1;
				break;
			case 4:
				soma[4]+=salario[i];
				cont[4]+=1;
				break;
			case 5:
				soma[5]+=salario[i];
				cont[5]+=1;
				break;
				
		}
	}
	cout << endl;
	
	cout << "media de cada setor: " << endl;
	for(int i=0; i<6; i++){
		mediasetor[i]=soma[i]/cont[i];
		cout << "setor " << i << ": " << mediasetor[i] << endl;
	}
	
	cout << endl;
	
	cout << "a maior salario e: " << maior << endl;
	cout << "a menor salario e: " << menor << endl;
}

int main(){
	int tam=50;
	string *nome= new string [tam];
	int *cod= new int [tam];
	float *salario= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite seu nome: ";
		cin >> nome[i];
		cout << "digite seu setor: (de 0 a 5)";
		cin >> cod[i];
		cout << "digite sua salario: ";
		cin >> salario[i];
	}
	
	veri(nome, cod, salario, tam);
	
	return 0;
}