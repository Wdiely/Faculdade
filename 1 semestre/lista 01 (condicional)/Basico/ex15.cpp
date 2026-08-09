#include<iostream>
#include<math.h>
using namespace std;

float custo(float x){
	float per= x*1.28;
	float por= x*0.45;
	float re= per+por;
	return re;
}

int main (){
	float x;
	cout << "qual o custo de fabrica do carro? ";
	cin >> x;
	
	float resul = custo(x);
	
	cout << "o custo pro consumidor e: " << resul;
	return 0;
}
	