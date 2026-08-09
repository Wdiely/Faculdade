#include<iostream>
#include<math.h>
using namespace std;

float conta(float a, float b, float c){
	float r= (a*365) + (b*30) + c;
	return r;
}
int main (){
	float a, m, d;
	cout << "informe quantos anos: ";
	cin >> a;
	cout << "informe quantos meses: ";
	cin >> m;
	cout << "informe quantos dias: ";
	cin >> d;
	
	cout << "o total de dias e: " << conta(a,m,d);
	return 0;
}