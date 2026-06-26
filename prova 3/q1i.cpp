#include <iostream>
using namespace std;

struct medico{
	string nome, especialidade;
	
	void preencher(){
		cout << "qual o nome do medico? ";
		cin >> nome;
		cout << "qual oa especialidade? ";
		cin >> especialidade;
	}
};

struct paciente{
	string nome, queixa;
	int idade;
	
	void preencher(){
		cout << "qual o nome do paciente? ";
		cin >> nome;
		cout << "qual a queixa? ";
		cin >> queixa;
		cout << "qual a idade? ";
		cin >> idade;
	}
};

struct remedio{
	string nome;
	int dosagem;
	float preco;
	
	void preencher(){
		cout << "qual o nome do remedio? ";
		cin >> nome;
		cout << "qual a dosagem? ";
		cin >> dosagem;
		cout << "qual o preco? ";
		cin >> preco;
	}
};

struct atendimento{
	float preco;
	paciente p1;
	medico m1;
	int quant;
	
	remedio *re;
	
	void mostrar(){
		p1.preencher();
		m1.preencher();
		cout << "quantos remedios? ";
		cin >> quant;
		re= new remedio[quant];
		
		for(int i=0; i<quant; i++){
			cout << "remedio " << i+1 << ": " << endl;
			re[i].preencher();
		}
		
		cout << "qual o preco do atendimento? ";
		cin >> preco;
	}               
		
};

void funcaoE(atendimento &a, medico &m){
	cout << "paciente: " << endl;
	cout << "nome: " << a.p1.nome << endl;
	cout << "queixa: " << a.p1.queixa << endl;
	cout << "idade: " << a.p1.idade << endl;
	if(a.m1.nome==m.nome){
		cout << "medico presente." << endl;
	}
}

float funcaoF(atendimento &a){
	float soma=0;
	for(int i=0; i<a.quant; i++){
		soma+=a.re[i].preco;
	}
	return soma;
}

float funcaoG(atendimento &a){
	return funcaoF(a)+a.preco;
}

void funcaoH(atendimento &a, string &nome, float &maior){
	if(funcaoG(a)>maior or maior==0){
		maior=funcaoG(a);
		nome=a.p1.nome;
	}
}

int main(){
	int tam=2;
	string nome;
	float maior=0;
	atendimento *p= new atendimento[tam];
	medico m;
	m.preencher();
	
	for (int i=0; i<tam; i++){
		cout << "paciente " << i+1 << endl;
		p[i].mostrar();
		funcaoE(p[i],m);
		funcaoH(p[i], nome, maior);
	}
	cout << "nome do pacinete que mais gastou: " << nome << endl;
	
}