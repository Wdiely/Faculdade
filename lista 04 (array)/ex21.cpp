#include<iostream>
using namespace std;

void veri(float *faturamento, int tam){
	float maior=0;
	float menor=0;
	
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=faturamento[i];
			menor=faturamento[i];
		}
		if(faturamento[i]>maior){
			maior=faturamento[i];
		}
		if(faturamento[i]<menor){
			menor=faturamento[i];
		}
		somatotal+=faturamento[i];
	}
	
	float mediatotal=somatotal/tam;
	
	cout << endl;
	cout << "a media de faturamento anual e: " << mediatotal << endl;
	cout << "meses com faturamento abaixo da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(faturamento[i]<mediatotal){
			cout << "dia " << i+1 << ", com R$ " << faturamento[i] <<endl;
		}
	}
	
	cout << endl;
	
	cout << "o maior faturamento e: " << maior << endl;
	cout << "o menor faturamento e: " << menor << endl;
}

int main(){
	int tam=12;
	float *faturamento= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite o faturamento do mes " << i+1 << ": ";
		cin >> faturamento[i];
	}
	
	veri(faturamento, tam);
	
	return 0;
}