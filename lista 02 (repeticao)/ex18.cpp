#include<iostream>
using namespace std;

void fibonacci(){
	int a = 1, b =1, prox = 0;
	
	while(prox<=500){
		if(prox==0 or prox==1){
			cout << 1 << " ";
			prox++;
		}else{
			prox= a + b;
			cout << prox << " ";
			a=b;
			b=prox;
		}
}
}

int main(){
	
	fibonacci();
	
	return 0;
}