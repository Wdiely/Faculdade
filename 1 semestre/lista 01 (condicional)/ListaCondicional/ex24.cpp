#include<iostream>
#include<math.h>
using namespace std;

void par(int a, int b){
	if((a % 2==0) or (b % 2==0)){
		cout << "ao menos um desses numeros e par";
	}else{
		cout << "esses numeros sao impares";
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