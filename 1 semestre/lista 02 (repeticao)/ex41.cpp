#include<iostream>
using namespace std;

void parcelas(float divida){
	float parcelas, per;
	
	cout << "DIVIDA | VALOR DOS JUROS | QTD DE PARCELAS | VALOR DAS PARCELAS" << endl;
	
	for(int i=0; i<=12; i= i+3){
		if(i==0){
			per= 0;
		}else if(i==3){
			per= 10;
		}else if(i==6){
			per= 15;
		}else if(i==9){
			per= 20;
		}else if(i==12){
			per= 25;
		}
		if(i==0){
			cout << divida << " | " << per << " | " << i+1 << " | " << divida << endl;
		}else{
		float dividafinal= divida * (1+per/100);
		parcelas=dividafinal/i;
		cout << dividafinal << " | " << per << " | " << i << " | " << parcelas << endl;
		}
	}
}

int main(){
	float divida;
	cout << "qual sua divida? ";
	cin >> divida;
	
	parcelas(divida);
	
	return 0;
}