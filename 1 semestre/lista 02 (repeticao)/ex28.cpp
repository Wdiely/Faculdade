#include<iostream>
using namespace std;

void funcao(int turmas){
	int alunos;
	int soma=0;
	
	for(int i=1; i<=turmas; i++){
		do{
			cout << "quantos alunos ha na turma " << i << "? ";
			cin >> alunos;
			if(alunos<=40){
				soma= soma + alunos;
			}else{
				cout << "erro. o numero de alunos nao pode passar de 40." << endl;
			}
		}while(alunos>40);
	}
	
	int media= soma/turmas;
	cout << "a media de alunos por turma e: " << media;
}

int main(){
	int turmas;
	cout << "quantas turmas existem? ";
	cin >> turmas;
	
	funcao(turmas);
	
	return 0;
}