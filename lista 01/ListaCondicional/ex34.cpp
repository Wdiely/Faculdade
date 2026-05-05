#include<iostream>
#include<math.h>
using namespace std;

void categoria(int idade){
	if (idade>=18){
		cout << "a categoria e: 'adulto'";
	}else if (idade>=14){
		cout << "a categoria e: 'juvenil B'";
	}else if (idade>=11){
		cout << "a categoria e: 'juvenil 'A'";
	}else if (idade>=8){
	cout << "a categoria e: 'infantil B'";
	}else if (idade>=5){
		cout << "a categoria e: 'infantil A'";
	}else{
		cout << "nao tem categoria";
	}
}

int main (){
	int idade;
	cout << "qual a sua idade?";
	cin >> idade;
	categoria(idade);
	return 0;
}