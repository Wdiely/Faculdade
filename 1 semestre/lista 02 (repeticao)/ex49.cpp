#include <iostream>
using namespace std;

float funcao(int num){
	float soma=0;
	for(int i=1; i<=num; i++){
		if(num==1){
			return 1;
		}else{
			soma+= 1.0/i;
		}
	}
	return soma;
}

double H(int n) {
    if (n == 1) {
        return 1.0;
    }else{
	    return H(n - 1) + 1.0 / n;
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