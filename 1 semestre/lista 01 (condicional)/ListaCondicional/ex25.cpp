#include<iostream>
#include<math.h>
using namespace std;


bool conta(float a, float b, float c){
	float soma= a+b+c;
	if(soma==180){
		return true;
	}else{
		return false;
	}
}

int main (){
	float a, b, c;
	cout << "Informe um dos angulos do triangulo: ";
    cin >> a;
    cout << "Informe outro angulo do triangulo: ";
    cin >> b;
    cout << "Informe outro angulo do triangulo: ";
    cin >> c;
    
    

	if(conta(a,b,c) == 1){
		 cout << "Os angulos formam um triangulo" << endl;
		}else{
		 cout << "Os angulos não formam um triangulo" << endl;	
	}
    
    return 0;
}