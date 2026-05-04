#include <iostream>
using namespace std;

void notas(float n1, float n2, float n3, float n4, float n5){
	float soma=0;
	
	if(n1>60){
		soma=soma+1;
	}
	if(n2>60){
		soma=soma+1;
	}
	if(n3>60){
		soma=soma+1;
	}
	if(n4>60){
		soma=soma+1;
	}
	if(n5>60){
		soma=soma+1;
	}
	cout<<"Voce tem "<<soma<<" notas acima de 60";
	
}

int main(){
	float n1,n2,n3,n4,n5;
	cout<<"Informe o primeira nota: ";
	cin>>n1;
	cout<<"Informe o segunda nota: ";
	cin>>n2;
	cout<<"Informe o terceira nota: ";
	cin>>n3;
	cout<<"Informe o quarta nota: ";
	cin>>n4;
	cout<<"Informe o quinta nota: ";
	cin>>n5;
	
	notas(n1,n2,n3,n4,n5);
	
	
}
