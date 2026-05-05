#include<iostream>
#include<math.h>

using namespace std;

void estacao(int mes){
	if(mes<=6 && mes>=3){
		cout << "e outono";
	}else if(mes<=9 && mes>6){
		cout << "e inverno";
	}else if(mes<=12 && mes>9){
		cout << "e primavera";
	}else{
		cout << "e verao";
	}	
}

int main(){
	int mes;
	cout << "----estacoes do ano----" << endl;
	cout << "Informe o mes (numero): ";
	cin >> mes;
	
	estacao(mes);
	
	return 0;
}