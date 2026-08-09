#include <iostream>

using namespace std;

struct banco {
    string conta;
    float saldo;
    
    void preencher(){
    	cout << "qual o numero da sua conta:";
    	cin >> conta;
    	cout << "qual o saldo: ";
    	cin >> saldo;
	}
    void saldo1(){
    	int cod, din;
		cout << "voce deseja sacar (1), ou depositar (2):";
    	cin >> cod;
    	cout << "quanto?";
    	cin >> din;
    	if(cod==1){
    		saldo-=din;
		}else{
			saldo+=din;
		}
		cout << "seu saldo e: " << saldo << endl;
	}
};

int main(){
	banco c1;
	c1.preencher();
	int resp=0;
	do{
		c1.saldo1();
		cout << "deseja fazer uma movimentacao novamente? (1)sim, (2)nao";
		cin >> resp;
	}while(resp!=2);
	
	return 0;
}