#include <iostream>
using namespace std;

float fatorial(int num){
	if(num==0){
		return 1;
	}else{
		return num* fatorial(num-1);
	}
}

float funcao(int num){
	float soma=1;
	float fatorial=1;
	for(int i=1; i<=num; i++){
		fatorial*=i;
		soma+= 1.0/fatorial;
	}
	return soma;
}

double H(int n) {
    if (n == 0) {
        return 1.0;
    }else{
	    return H(n - 1) + 1.0 / fatorial(n);
	}
}

int main() {
	int num;
	cout << "qual o numero de termos? ";
	cin >> num;
	
	cout << "o resultade e: " << funcao(num) << endl;
	cout << "o resultade e: " << H(num);
	
	return 0;
}