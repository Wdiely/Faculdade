#include<iostream>
using namespace std;

void temperaturas(int quantidade){
	float maior=0, menor=0, soma=0, temp;
	
	int divisor=quantidade;
	
	for(int i=1; i<=quantidade; i++){
		cout << "digite a temperatura " << i << ": ";
		cin >> temp;
		soma+=temp;
		
		if(i==1){
			menor= temp;
			maior= temp;
		}if(temp>maior){
			maior=temp;
		}if(temp<menor){
			menor=temp;
		}
	}
	
	float media= soma/divisor;
	
	cout << "a media de temperatura e: " << media << endl;
	cout << "a maior temperatura e: " << maior << endl;
	cout << "a menor temperatura e: " << menor << endl;
	
}

int main(){
	int quant;
	cout << "qual a quantidade de temperaturas que deseja analisar? ";
	cin >> quant;
	
	temperaturas(quant);
	
	return 0;
}