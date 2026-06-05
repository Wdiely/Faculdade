#include<iostream>
using namespace std;

void veri(float *temperatura, int tam){
	float maior=0;
	float menor=0;
	
	float somatotal=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=temperatura[i];
			menor=temperatura[i];
		}
		if(temperatura[i]>maior){
			maior=temperatura[i];
		}
		if(temperatura[i]<menor){
			menor=temperatura[i];
		}
		somatotal+=temperatura[i];
	}
	
	float mediatotal=somatotal/tam;
	
	cout << endl;
	cout << "a media de temperatura total e: " << mediatotal << endl;
	cout << "dias com temperatura acima da media: " << endl;
	
	for(int i=0; i<tam; i++){
		if(temperatura[i]>mediatotal){
			cout << "dia " << i+1 << ", com  " << temperatura[i] <<endl;
		}
	}
	
	cout << endl;
	
	cout << "a maior temperatura e: " << maior << endl;
	cout << "a menor temperatura e: " << menor << endl;
}

int main(){
	int tam=30;
	float *temperatura= new float [tam];
	
	for(int i=0; i<tam; i++){
		cout << "digite a temperatura do dia " << i+1 << ": ";
		cin >> temperatura[i];
	}
	
	veri(temperatura, tam);
	
	return 0;
}