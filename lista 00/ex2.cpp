#include<iostream>
#include<math.h>
using namespace std;

float fracao (float a, float b, float c){
	float r= (a+b) * (a+b);
	float s= (b+c) * (b+c);
	float f= (r+s)/2;
	return f;
}

int main (){
	int A, B, C;

 cout << "Informe um valor inteiro A:";
 cin >> A;
 cout << "Informe um valor inteiro B:";
 cin >> B;
 cout << "Informe um valor inteiro C:";
 cin >> C;

	cout << "o resultado e:" << fracao(A,B,C);
	return 0;
}