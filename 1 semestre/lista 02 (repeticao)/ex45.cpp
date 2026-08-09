#include<iostream>
using namespace std;

int main(){
	char *gab= new char[9];
	
	for(int i= 0; i<10; i++){
		cout << "professor, digite o gabarito da questao " << i+1 << ": (responda em minusculo)";
		cin >> gab[i];
	}

	int contagem=0, maior=0, menor=11;
	float alunos=0, soma=0; 
	int loop=0;
		
	do{
		char *resp= new char[9];
		contagem=0;
		
		for(int i= 0; i<10; i++){
			cout << "qual a resposta da questao " << i+1 << ": (responda em minusculo)";
			cin >> resp[i];
			if(resp[i]==gab[i]){
				contagem+=1;
			}	
		}
		
		if(contagem>maior){
				maior=contagem;
		}else if(contagem<menor){
			menor=contagem;
		}		
		
		cout << "sua contagem de acertos e sua nota e: " << contagem << endl;
		
		cout << "outro aluno deseja usar o sistema? (1-sim, 2- nao) ";
		cin >> loop;
		
		soma+=contagem;
		alunos+=1;
		
	}while(loop!=2);
	
	float media= soma/alunos;
	
	cout << "a maior nota foi: " << maior << endl;
	cout << "a menor nota foi: " << menor << endl;
	cout << "a media de notas foi: " << media << endl;
	cout << "a quantidade de alunos foi: " << alunos;
	
	return 0;
}