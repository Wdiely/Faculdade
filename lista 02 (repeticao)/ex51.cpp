#include<iostream>
using namespace std;

int fatorial(int num){
	if(num==0){
		return 1;
	}else{
		return num * fatorial (num-1);
	}
}

int main(){
	int num;
	cout << "digite um numero inteiro";
	cin >> num;
	
	cout << "o fatorial desse num e: " << fatorial(num);
	
	return 0;
}