#include<iostream>
#include<math.h>

using namespace std;

float media(float n1, float n2, float n3){
 float c= (n1*2) + (n2*3) + (n3*5);
 float r= c/(2+3+5);
 return r;
}
int main (){
float n1, n2, n3;	

 cout << "Informe a nota1:";
 cin >> n1;
 cout << "Informe a nota2:";
 cin >> n2;
 cout << "Informe a nota3:";
 cin >> n3;
 
 cout << "sua media e: " << media(n1,n2,n3);
 
	return 0;
}