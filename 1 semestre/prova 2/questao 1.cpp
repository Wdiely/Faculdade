#include<iostream>
using namespace std;

int main(){
	int num, resto;
	int cont5=0, cont3=0;
	
	cout << "digite 0 para terminar o programa. " << endl;
	do{
		cout << "digite um numero: ";
		cin >> num;
		
		if (num != 0) {
        	resto = num % 17;

            if (resto % 5 == 0) {
                cont5++;
            }

            if (resto % 3 == 0 && num % 3 == 0) {
                cont3++;
            }
        }
	}while(num!=0);
	
	cout << "quantidade de numeros divididos por 17, em que o resto e mutiplo de 5: " << cont5 << endl;
	cout << "quantidade de numeros divididos por 17, em que o resto e o numero sao mutiplo de 3 conjuntamente:" << cont3;
	
	return 0;
}