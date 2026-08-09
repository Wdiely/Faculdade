#include<iostream>
using namespace std;

void veri(int *nota, int tam){
	cout << endl;
	
	float *cont= new float[5] {0};
	
	for(int i=0; i<tam; i++){
		switch(nota[i]){
			case 1:
				cont[0]+=1;
				break;
			case 2:
				cont[1]+=1;
				break;
			case 3:
				cont[2]+=1;
				break;
			case 4:
				cont[3]+=1;
				break;
			case 5:
				cont[4]+=1;
				break;
		}
	}
	for(int i=0; i<5; i++){
		cout << "quantidade de notas " << i+1 << ": " << cont[i] << endl;
	}
	
	cout << endl;
	
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		somatotal+=nota[i];
	}
	
	float mediatotal=somatotal/tam;
	
	cout << "a media de nota de satisfacao e: " << mediatotal << endl;
	
	cout << endl;
	int vezes=0;
	int notaf=0;
	
	for(int i=0; i<5; i++){
		if(i==0){
			vezes=cont[i];
			notaf=i+1;
		}
		if(cont[i]>vezes){
			vezes=cont[i];
			notaf=i+1;
		}
	}
	
	cout << "a nota que mais aparece e: " << notaf << ", " << vezes << "vezes.";
	

}

int main(){
	int tam=5;
	int *nota= new int [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite a nota de satisfacao: ";
		cin >> nota[i];
	}
	
	veri(nota, tam);
	
	return 0;
}