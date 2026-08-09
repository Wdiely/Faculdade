#include<iostream>
#include<math.h>
using namespace std;

struct aluno{
	int matri;
	string nome;
	float *notas= new float [3];
};

void preencher(aluno &P){
	cout << "digite a matricula: " << endl;
	cin >> P.matri;
	cout << "digite o nome: " << endl;
	cin >> P.nome;
	for ( int i=0; i<3; i++){
		cout << "digite a nota [" << i+1 << "]: " << endl;
		cin >> P.notas[i];
	}
}

void media(aluno &P){
	float soma= 0;
	for ( int i=0; i<3; i++){
		soma += P.notas[i];
	}
	float media=soma/3;
	
	cout << "a media do aluno e: " << media << endl;
}

int main(){
	aluno P1, P2, P3;
	cout << "aluno 1: " << endl;
	preencher(P1);
	media(P1);
	
	cout << "aluno 2: " << endl;
	preencher(P2);
	media(P2);
	
	cout << "aluno 3: " << endl;
	preencher(P3);
	media(P3);
	
	return 0;
}