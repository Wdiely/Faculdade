#include<iostream>
using namespace std;

void intervalos(int quantidade){
	int num;
	int i0a25= 0, i26a50= 0, i51a75= 0, i76a100= 0;
	for(int i=1; i<=quantidade; i++){
		cout << "digite um numero: ";
		cin >> num;
		
		if(num>=0 and num<=25){
			i0a25 +=1;
		}else if(num>=26 and num<=50){
			i26a50 +=1;
		}else if(num>=51 and num<=75){
			i51a75 +=1;
		}else if(num>=76 and num<=100){
			i76a100 +=1;
		}
	}
	
	cout << "quantidade de numeros no intervalo [0-25] : " << i0a25 << endl;
	cout << "quantidade de numeros no intervalo [26-50] : " << i26a50 << endl;
	cout << "quantidade de numeros no intervalo [51-75] : " << i51a75 << endl;
	cout << "quantidade de numeros no intervalo [75-100] : " << i76a100 << endl;
	
}

int main(){
	int quant;
	do{
		cout << "qual a quantidade de numeros que deseja verificar? ";
		cin >> quant;
		if(quant<0){
			cout << " erro. a quantidade nao pode ser negativa." << endl;
		}
	}while(quant<0);
	
	intervalos(quant);
	
	return 0;
}