#include<iostream>
using namespace std;
void funcao(float *notas){
	float maior=0;
	float menor=0;
	
	float somainicial=0;
	
	for(int i=0; i<7; i++){
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
		somainicial+=notas[i];
	}
	float soma=somainicial-maior-menor;
	float media=soma/5;
	
	cout << endl;
	cout << " maior nota: " << maior << endl;
	cout << " menor nota: " << menor << endl;
	cout << " media das demais notas: " << media << endl;
	cout << endl;
}
int main(){
	string nome;
	float *notas= new float [7];
	
	cout << "qual o nome do atleta: ";
	cin >> nome;
	for(int i=0; i<7; i++){
		cout << "digite a nota " << i+1 << ": ";
		cin >> notas[i];
	}
	
	funcao(notas);
	
	return 0;
}