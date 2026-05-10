#include<iostream>
#include<math.h>
using namespace std;

float preco(int cod, int un){
	float preco;
	switch(cod){
		case 100: {
			 preco= 2.2*un;
			break;
		}case 101: {
			 preco= 3.3*un;
			break;
		}case 102: {
			 preco= 3.5*un;
			break;
		}case 103: {
			 preco= 5.2*un;
			break;
		}case 104: {
			 preco= 7.3*un;
			break;
		}case 105: {
			 preco= 2.0*un;
			break;
		}default:{
			preco= 0;	 
		}
		return preco;
	}
}

int main (){
	cout << "|   ESPECIFICACAO   | CODIGO | PRECO |" << endl;
	cout << "| Cachorro quente   |  100   | 2,20  |" << endl;
	cout << "| Bauru simples     |  101   | 3,30  |" << endl;
	cout << "| Bauru com ovo     |  102   | 3,50  |" << endl;
	cout << "| Hamburguer        |  103   | 5,20  |" << endl;
	cout << "| Cheeseburguer     |  104   | 7,30  |" << endl;
	cout << "| Refrigerante      |  105   | 2,00  |" << endl;
	cout << endl;
	
	int cod, un;
	
	cout << "qual o codigo do seu pedido? ";
	cin >> cod;
	cout << "quantas unidades deseja? ";
	cin >> un;
	
	cout << "seu pedido deu " << preco(cod,un) << " reais";
	return 0;
}