#include<iostream>
using namespace std;
void funcao(int *cod, int *veiculos, int *acidentes, int tam){
	float maior=0;
	float menor=0;
	int codmaior=0;
	int codmenor=0;
	
	float somav=0;
	float somaaci=0;
	float cont=0;
	
	for(int i=0; i<tam; i++){
		if(i==0){
			maior=acidentes[i];
			menor=acidentes[i];
		}
		if(acidentes[i]>maior){
			maior=acidentes[i];
			codmaior=i;
		}
		if(acidentes[i]<menor){
			menor=acidentes[i];
			codmenor=i;
		}
		
		if(veiculos[i]<2000){
			somaaci+=acidentes[i];
			cont+=1;
		}
		somav+=veiculos[i];
	}
	
	float mediav=somav/tam;
	float mediaaci=somaaci/cont;
	
	cout << endl;
	cout << "cidade com maior numero de acidentes: " << cod[codmaior] << ", com " << maior << endl;
	cout << "cidade com menor numero de acidentes: " << cod[codmenor] << ", com " << menor << endl;
	cout << "media de veiculos nas 5 cidades: " << mediav << endl;
	cout << "media de acidentes nas cidades com menos de 2000 veiculos e: " << mediaaci << endl;
	cout << endl;
}
int main(){
	int tam=5;
	int *cod= new int [tam];
	int *veiculos= new int [tam];
	int *acidentes= new int [tam];
	
	for(int i=0; i<tam; i++){
		cout << "qual o codigo da cidade: ";
		cin >> cod[i];
		cout << "quantos veiculos de passeio existem: ";
		cin >> veiculos[i];
		cout << "quantos acidentes com vitimas aconteceram: ";
		cin >> acidentes[i];
	}
	
	funcao(cod,veiculos,acidentes,tam);
	
	return 0;
}