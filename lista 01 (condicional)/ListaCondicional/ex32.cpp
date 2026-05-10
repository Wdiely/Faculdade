#include<iostream>
#include<math.h>
using namespace std;

void desconto(bool avista, bool vip){
	
	if(avista==true){
		cout << "digite se voce e VIP ou sua compra deu mais de 300 reais? (1- sim 0- nao) ";
		cin >> vip;
		if(vip==true){
			cout << "voce tera desconto";
		}else{
			cout << "voce nao tera desconto";
		}
	}else{
		cout << "voce nao tera desconto";
	}
}

int main (){
	bool avista, vip;
	cout << "voce pagara a vista? (1-sim 0-nao) ";
	cin >> avista;
	
	desconto(avista,vip);
	return 0;
}