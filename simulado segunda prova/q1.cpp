#include <iostream>

using namespace std;

/*
Questão 1
Crie um algoritmo que receba continuamente números fornecidos pelo usuário. (LOOP - FLAG DE PARADA 999)
O algoritmo deve contar e imprimir quantos números são ímpares e negativos ao mesmo tempo. (CONDICIONAL - IF)
O programa deve terminar quando o usuário digitar 999 (esse valor é a flag de parada).
*/


int main() {
	
	int numero = 0;
	int imparENegativo = 0;
	
	while(numero != 999) {
		
		cout << "Informe um numero: ";
		cin >> numero;
		
		if(numero < 0 && numero % 2 != 0) {// && ou and
			imparENegativo++;
			// Se você preferir pode usar essas outras formas abaixo
			// imparENegativo = imparENegativo + 1;
			// imparENegativo += 1;
		}
	}
	
	cout << "Tem " << imparENegativo << " numeros que são NEGATIVOS e IMPARES ao mesmo tempo!" << endl;
	
	return 0;
}