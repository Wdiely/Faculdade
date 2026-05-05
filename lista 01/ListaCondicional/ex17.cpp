#include <iostream>
using namespace std;

void positivo(float x){
	if(x==0){
		cout<<"zero";
	}
	else if(x<0){
		cout << "esse numero e negativo";
	}else{
		cout << "esse numero e positivo";
	}
}

int main(){
	float x;
	cout << "informe um numero: ";
	cin >> x;
	positivo(x);
	return 0;
	
}
