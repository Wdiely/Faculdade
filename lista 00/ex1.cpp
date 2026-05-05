#include<iostream>
#include<math.h>
using namespace std;

float distancia (float x1, float x2, float y1, float y2){
	float a= (x2-x1) * (x2-x1);
	float b= (y2-y1) * (y2-y1);
	float d= sqrt (a+b);
	return d;
}

int main (){
	float x1, y1, x2, y2;

 cout << "Informe x1:";
 cin >> x1;
 cout << "Informe y1:";
 cin >> y1;
 cout << "Informe x2:";
 cin >> x2;
 cout << "Informe y2:";
 cin >> y2;
 
	cout << distancia (x1,x2,y1,y2);
	return 0;
}