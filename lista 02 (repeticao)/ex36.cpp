#include<iostream>
using namespace std;

void tabuada(int num, int inicial, int final){
	
	for(int i= inicial; i<=final; i++){
		int conta = num * i;
		cout << num << " x " << i << " = " << conta << endl;
	}
	
}

int main(){
	int num, inicial, final;
	
	do{
		cout << " informe o numero que deseja ver a tabuada:";
	    cin >> num;
			if(num < 0){
				cout << "error - valor invalido." << endl;
			}
		}while(num < 0);
 	cout << "informe o valor inicial: ";
 	cin >> inicial;
 	
 	do{
	cout << "informe o valor final: ";
 	cin >> final;
 	if(final<inicial){
 		cout << "erro. o valor final nao pode ser menor que o valor inicial" << endl;
	 }
	}while(final<inicial);
	
	tabuada(num,inicial,final);
	
	return 0;
}