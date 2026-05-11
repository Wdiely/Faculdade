#include<iostream>
using namespace std;

void funcao(int n){
     int a = 1, b = 1, prox;
     
     for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            cout << 1 << " ";
        } else {
            prox = a + b;
            cout << prox << " ";
            a = b;
            b = prox;
        }
    }
}

int main(){
	int n;
	do{
	cout << "digite um nuemro inteiro positivo: ";
	cin >> n;
	if(n<0){
		cout << "erro, o valor nao poe ser negativo. " << endl;
	}
	}while(n<0);
	
	funcao(n);
	
	return 0;
}
