#include<iostream>
using namespace std;

void primo(int num){
	bool primo=true;
	
	if(num<=1){
		primo = false;
	}else{
	for(int i=2; i<num; i++){
		if(num%i==0){
			primo= false;
		}
	}
	}
	
	if(primo){
		cout << "esse numero e primo.";
	}else{
		cout << "esse numero nao e primo. ";
	}
}

int main(){
	int num;
	cout << "digite um numero inteiro: ";
	cin >> num;
	
	primo(num);
	
	return 0;
}