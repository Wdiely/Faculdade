#include<iostream>
using namespace std;

void tabuada(int num){
	
	for(int i= 1; i<=10; i++){
		int conta = num * i;
		cout << num << " x " << i << " = " << conta << endl;
	}
	
}

int main(){
	int num;
	
	do{
		cout << " informe o numero que deseja ver a tabuada:";
	    cin >> num;
			if(num < 0){
				cout << "error - valor invalido." << endl;
			}
		}while(num < 0);

	
	tabuada(num);
	
	return 0;
}