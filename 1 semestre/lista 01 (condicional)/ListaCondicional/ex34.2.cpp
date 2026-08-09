#include<iostream>
#include<math.h>
using namespace std;

float media(float n1, float n2, float n3){
	float conta;
	if(n1 >= n2 && n1 >= n3){
		conta= ((n1*4) + (n2*3) + (n3*3))/10;
	}else if(n2 >= n3 && n2 >= n1){
		conta= ((n2*4) + (n1*3) + (n3*3))/10;
	}else{
		conta= ((n3*4) + (n1*3) + (n2*3))/10;
	}
	return conta;
}

void rep(float media){
	if(media >= 50){
		cout << "APROVADO";
	}else{
		cout << "REPROVADO";
	}
}

int main (){
	float n1, n2, n3, cod;
	
	cout << "---------  Prezado aluno -------------" << endl;
	cout << "Informe seu codigo/matricula: ";
	cin >> cod;
	cout << "Informe a nota 1: ";
	cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
	cout << "Informe a nota 3: ";
	cin >> n3;
	cout << "---------------------------------------" << endl;
	
	float mediax= media(n1,n2,n3);

	cout << "sua media e: " << media(n1,n2,n3) << endl;
	cout << "voce foi "; rep(mediax);
	return 0;
}