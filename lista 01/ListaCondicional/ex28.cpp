#include<iostream>
#include<math.h>
using namespace std;

   void aprov(float a, float b, float c){
   	float media = (a+b+c)/3;
   	cout << "sua media e: " << media << endl;
   	if( media >= 6){
   		cout << "voce foi aprovado";
	   }
	   else{
	   	cout << "voce nao foi aprovado";
	   }
   }

int main (){
	float a,b,c;
	cout << "digite sua nota 1: ";
	cin >> a;
	cout << "digite sua nota 2: ";
	cin >> b;
	cout << "digite sua nota 3: ";
	cin >> c;
	aprov(a,b,c);
	return 0;
}