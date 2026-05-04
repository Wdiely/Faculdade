#include<iostream>
#include<math.h>

using namespace std;

void percentual(float medio){
	int faixa;
	float per;
	if(medio<=200){
		faixa= 1;
	}else if(medio<=400){
		faixa= 2;
	}else if(medio<=600){
		faixa= 3;
	}else{
		faixa= 4;
	}
	
	switch(faixa){
	case 1:{
		per=00;
		float cred= medio * per;
		cout << "seu saldo medio e " << medio << ", e seu credito e de " << cred;
		break;
	}case 2: {
		per=0.2;
		float cred= medio * per;
		cout << "seu saldo medio e " << medio << ", e seu credito e de " << cred;
		break;
	}case 3: {
		per=0.3;
		float cred= medio * per;
		cout << "seu saldo medio e " << medio << ", e seu credito e de " << cred;
		break;
	}default: {
		per=0.4;
		float cred= medio * per;
		cout << "seu saldo medio e " << medio << ", e seu credito e de " << cred;
		break;
	}
}
}


int main(){
	float medio;
	cout << "qual o seu saldo medio? ";
	cin >> medio;
	
	percentual(medio);
	return 0;
}