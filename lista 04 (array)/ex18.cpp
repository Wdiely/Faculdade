#include<iostream>
using namespace std;

void veri(string *nome, int *cod, float *notas, int tam){
	float maior=0;
	float menor=0;
	
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=notas[i];
			menor=notas[i];
		}
		if(notas[i]>maior){
			maior=notas[i];
		}
		if(notas[i]<menor){
			menor=notas[i];
		}
		somatotal+=notas[i];
	}
	
	float mediatotal=somatotal/tam;
	
	cout << endl;
	cout << "a media de notas total e: " << mediatotal << endl;
	cout << "pessoas com notas acima da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(notas[i]>mediatotal){
			cout << nome[i] << ", com " << notas[i] <<endl;
		}
	}
	cout << endl;
	
	float *soma= new float[3] {0};
	float *cont= new float[3] {0};
	float *mediasala= new float[3] {0};
	
	for(int i=0; i<tam; i++){
		switch(cod[i]){
			case 1:
				soma[0]+=notas[i];
				cont[0]+=1;
				break;
			case 2:
				soma[1]+=notas[i];
				cont[1]+=1;
				break;
			case 3:
				soma[2]+=notas[i];
				cont[2]+=1;
				break;
		}
	}
	cout << endl;
	
	cout << "media de cada sala: " << endl;
	for(int i=0; i<3; i++){
		mediasala[i]=soma[i]/cont[i];
		cout << "sala " << i+1 << ": " << mediasala[i] << endl;
	}
	
	cout << endl;
	
	cout << "a maior notas e: " << maior << endl;
	cout << "a menor notas e: " << menor << endl;
}

int main(){
	int tam=50;
	string *nome= new string [tam];
	int *cod= new int [tam];
	float *notas= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite seu nome: ";
		cin >> nome[i];
		cout << "digite sua sala: (de 1 a 3)";
		cin >> cod[i];
		cout << "digite sua nota: ";
		cin >> notas[i];
	}
	
	veri(nome, cod, notas, tam);
	
	return 0;
}