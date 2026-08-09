#include<iostream>
using namespace std;

void funcao(float a, float b){
	float soma =0;
	if (a < b) {
        for (int i = a + 1; i < b; i++) {
            cout << i << " ";
            soma+=i;
        }
    } else {
        for (int i = b + 1; i < a; i++) {
            cout << i << " ";
            soma+=i;
        }
    }
	cout << "a soma e: " << soma;
}

int main (){
	float num1, num2;
	
	cout << "digite 2 numeros: ";
	cin >> num1 >> num2;
	
	funcao(num1, num2);
	
	return 0;
}
