#include<iostream>
#include<math.h>
using namespace std;

void viagem(bool passagem, bool vip){
	
	if(passagem==true){
		cout << "voce possui passaporte ou identidae? (1- sim 0- nao) ";
		cin >> vip;
		if(vip==true){
			cout << "voce podera viajar";
		}else{
			cout << "voce nao podera viajar";
		}
	}else{
		cout << "voce nao podera viajar";
	}
}

int main (){
	bool passagem, vip;
	cout << "voce ja tem a passagem comprada? (1-sim 0-nao) ";
	cin >> passagem;
	
	viagem(passagem,vip);
	return 0;
}