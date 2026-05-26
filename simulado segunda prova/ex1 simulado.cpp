#include<iostream>
using namespace std;

int main(){
	int num;
	int contagem;
	
	cout << "digite 0 para finalizar o programa." << endl;
	
	do{
		cout << "digite um numero: ";
		cin >> num;
		
		if(num%2==0 and num>0){
			cout << "par e positivo: " << num << endl;
			
			contagem+=1;
		}
		
	}while(num!=0);
	
	cout << "quantidade de numeros: " << contagem;
	
	return 0;
}