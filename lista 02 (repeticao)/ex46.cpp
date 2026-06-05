#include<iostream>
using namespace std;
void funcao(float *saltos){
	float maior=0;
	float menor=0;
	
	float somainicial=0;
	
	for(int i=0; i<5; i++){
		if(i==0){
			maior=saltos[i];
			menor=saltos[i];
		}
		if(saltos[i]>maior){
			maior=saltos[i];
		}
		if(saltos[i]<menor){
			menor=saltos[i];
		}
		somainicial+=saltos[i];
	}
	float soma=somainicial-maior-menor;
	float media=soma/3;
	
	cout << endl;
	cout << " maior salto: " << maior << endl;
	cout << " menor salto: " << menor << endl;
	cout << " media dos demais saltos: " << media << endl;
	cout << endl;
}
int main(){
	string nome;
	float *saltos= new float [5];
	
	cout << "qual o nome do atleta: ";
	cin >> nome;
	for(int i=0; i<5; i++){
		cout << "digite o salto " << i+1 << ": ";
		cin >> saltos[i];
	}
	
	funcao(saltos);
	
	return 0;
}