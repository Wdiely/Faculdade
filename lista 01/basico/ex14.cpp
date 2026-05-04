#include<iostream>
#include<math.h>
using namespace std;

int main (){
	float a;
	float b;
	cout << "RESPONDA NO FORMATO DE 24 HORAS" << endl;
	cout << "que horas voce comecou a jogar? ";
	cin >> a;
	cout << "que horas voce parou de jogar? ";
	cin >> b;
	float r=b-a;
	cout <<"voce jogou durante " << r << "horas";
	return 0;
}