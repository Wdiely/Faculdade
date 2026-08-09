#include<iostream>
#include<math.h>

using namespace std;

void idade(int x){
		int falta= 18-x;
	if(x>=18){
		cout << "voce pode tirar carteira " ;
	}else{
		cout << "voce nao pode tirar carteira, faltam " << falta << " anos";;
	}
}

	
	int main (){
		float x;
		cout << "digite sua idade: ";
		cin >> x;
		idade(x);
		return 0;
	}