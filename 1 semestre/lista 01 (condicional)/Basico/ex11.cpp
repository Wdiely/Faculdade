#include<iostream>
using namespace std;

float soma(float x, float y){
		float resultado = (x*x) + (y*y) - (6*x*y) -1;
		return resultado;
}

int main(){
	
	float x, y;
	cout << "f(x,y) = x^2 + y^2 - 6xy -1" << endl;
	cout << "de um valor para X: ";
	cin >> x;
	cout << "de um valor para Y: ";
	cin >> y;
	cout << "resultado" << soma(x,y);
	
	return 0;
}