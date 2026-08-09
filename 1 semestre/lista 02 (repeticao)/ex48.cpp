#include <iostream>
using namespace std;

int main() {
    int numero;
    int invertido = 0;
    int digito;

	do{
    	cout << "Digite um numero inteiro positivo: ";
    	cin >> numero;
    }while(numero > 0);
        

    while (numero > 0) {
        digito = numero % 10;
        
        invertido = invertido * 10 + digito;

        numero = numero / 10;
    }       
    
    cout << "O numero invertido e: " << invertido << endl;
    return 0;
}