#include<iostream>
#include<math.h>

using namespace std;

void funcao(int cod, float salario){
	float per1, per;
	
	switch(cod){
		case 101: {
			per1= 1.1; per=0.1;
			break;
		}case 102: {
			per1= 1.2; per=0.2;
			break;
		}case 103: {
			per1= 1.3; per=0.3;
			break;
		}default: {
			per1= 1.4; per=0.4;
		}
	}
	
	float novo= salario * per1;
	float dif= salario * per;
	cout << "seu salario antigo e: " << salario << ", seu salario novo e: " << novo << ", e a diferenca foi de " << dif;
}



int main (){
	float cod, salario;
	
	cout << "| CODIGO |   CARGO   |PERCENTUAL|" << endl;
	cout << "|101     |Gerente    | 10%      |" << endl;
	cout << "|102     |Engenheiro | 20%      |" << endl;
	cout << "|103     |Tecnico    | 30%      |" << endl;
	
	cout << "qual o codigo do seu cargo? ";
	cin >> cod;
	cout << "qual o seu salario? ";
	cin >> salario;
	
	funcao(cod,salario);
	return 0;
}