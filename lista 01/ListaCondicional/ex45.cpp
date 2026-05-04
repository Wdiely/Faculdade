#include<iostream>
#include<math.h>

using namespace std;

void funcao(int montante){
	int cem= montante/100;
	int restocem= montante%100;
	int cinquenta= restocem/50;
	int restocinq= restocem%50;
	int dez= restocinq/10;
	int restodez= restocinq%10;
	int cinco= restodez/5;
	int um= restodez%5;
	
	cout << "cedulas de R$100: " << cem << endl;
	cout << "cedulas de R$50 : " << cinquenta << endl;
	cout << "cedulas de R$10 : " << dez << endl;
	cout << "cedulas de R$5  : " << cinco << endl;
	cout << "cedulas de R$1  : " << um << endl;
}

int main(){
	int montante;
	cout << "qual o montante? ";
	cin >> montante;
	
	cout << "valor informado: " << montante << " reais" << endl;
	funcao(montante);
	
	return 0;
}