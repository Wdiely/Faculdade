#include<iostream>
#include<math.h>

using namespace std;

float menor(float a, float b, float c){
	if (a<=b and a<=c)
	return a;
	else if (b<=a and b<=c)
	return b;
	else 
	return c;
}

float maior(float a, float b, float c){
	if (a>=b and a>=c)
	return a;
	else if (b>=a and b>=c)
	return b;
	else 
	return c;
}

void funcao(int i, float a, float b, float c){
	float menorx= menor(a,b,c);
	float maiorx= maior(a,b,c);
	float meiox= a+b+c-menorx-maiorx;
	switch(i){
		case 1:{
		    cout << menorx << "," << meiox << "," << maiorx;
		    break;
		}                         
		case 2: {
			cout << maiorx << "," << meiox << "," << menorx;
			break;
		}
		case 3:{
			cout << menorx << "," << maiorx << "," << meiox;
			break;
		}
		default: {
			
			break;
		}
	}
}

int main(){
	int i;
	float a,b,c;
	cout << "digite um numero inteiro positivo de 1 a 3: ";
	cin >> i;
	cout << "digite quaisquer outros 3 numeros: ";
	cin >> a >> b >> c;
	
	funcao(i,a,b,c);
	
	return 0;
}