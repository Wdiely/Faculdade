#include<iostream>
#include<math.h>
using namespace std;

void conta(float a, float b){
	if(a<b){
	float r= b-a;
	cout << "voce jogou durante " << r << " horas";
	}else{
	float r= (24 - a) + b;
	cout << "voce jogou durante " << r << " horas";
	}
}

int main (){
	float a;
	float b;
	cout << "RESPONDA NO FORMATO DE 24 HORAS" << endl;
	cout << "que horas voce comecou a jogar? ";
	cin >> a;
	cout << "que horas voce parou de jogar? ";
	cin >> b;
	
	conta(a,b);
	return 0;
}