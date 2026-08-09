#include<iostream>
#include<math.h>
using namespace std;

void media(float modo, float n1, float n2, float n3){
	float conta;
	if(modo = 1){
		conta= ((n1*3) + (n2*3) + (n3*4))/10;
		cout << "sua media e: " << conta;
	}else if(modo = 2){
		conta= (n2 + n1 + n3)/3;
		cout << "sua media e: " << conta;
	}else{
		conta= 3/((1/n1) + (1/n2) + (1/n3));
		cout << "sua media e: " << conta;
	}

}

int main (){
	float modo, n1, n2, n3;
	
	cout << "qual media voce deseja usar? (1- ponderada / 2- aritmetica / 3- harmonica) ";
	cin >> modo;
	cout << "Informe a nota 1: ";
	cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
	cout << "Informe a nota 3: ";
	cin >> n3;
	
	media(modo,n1,n2,n3);
	return 0;
}