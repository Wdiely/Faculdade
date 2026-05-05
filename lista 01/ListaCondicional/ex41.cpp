#include<iostream>
#include<math.h>
using namespace std;

float preco(int cod, int un){
	float preco;
	switch(cod){
		case 1001: {
			 preco= 5.32*un;
			break;
		}case 1324: {
			 preco= 6.45*un;
			break;
		}case 6548: {
			 preco= 2.37*un;
			break;
		}case 1987: {
			 preco= 5.32*un;
			break;
		}case 7623: {
			 preco= 6.45*un;
			break;
		}default:{
			preco= 0;	 
		}
		return preco;
	}
}

int main (){
	cout << " | CODIGO | PRECO |" << endl;
	cout << " |  1001  | 5,32  |" << endl;
	cout << " |  1324  | 6,45  |" << endl;
	cout << " |  6548  | 2,37  |" << endl;
	cout << " |  1987  | 5,32  |" << endl;
	cout << " |  7623  | 6,45  |" << endl;
	cout << endl;
	
	int cod, un;
	
	cout << "qual o codigo do pedido? ";
	cin >> cod;
	cout << "quantas unidades foram pedidas? ";
	cin >> un;
	
	cout << "o cliente deve: " << preco(cod,un) << " reais";
	return 0;
}