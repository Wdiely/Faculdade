#include<iostream>
#include<math.h>

using namespace std;

void valortotal(float valorx, float quantidadex, float ipix, float valory, float quantidadey, float ipiy){
	float valor=((valorx * quantidadex) + (valory * quantidadey) )* ( 1 + (ipix/100));
	
	cout << "o valor total pago foi: " << valor << endl;
}

int main(){
	float valorx, quantidadex, ipix;
	float valory, quantidadey, ipiy;
	cout << "informe respectivamente o valor da peca X, a quantidade de pecas X, e o IPI da peca X (em porcentagem): ";
	cin >> valorx >> quantidadex >> ipix;
	cout << "informe respectivamente o valor da peca Y, a quantidade de pecas Y, e o IPI da peca Y (em porcentagem): ";
	cin >> valory >> quantidadey >> ipiy;
	
	valortotal(valorx, quantidadex, ipix, valory, quantidadey, ipiy);
	
	return 0;
}