#include<iostream>
#include<math.h>
using namespace std;

void par(int a, int b){
	
	if((a % 2==0) and (b % 2==0)){
		cout << "esses numeros sao pares";
	}else{
		cout << "ao menos 1 desses numeros e impar";
	}
}
	
	int main(){
    int a, b;
    cout << "Informe um numero: ";
    cin >> a;
    cout << "Informe outro numero: ";
    cin >> b;
    
    par(a,b);
    return 0;
}