#include <iostream>
#include<fstream>
using namespace std;

struct contato{
	int id;
    string nome;
    string numero;
};
void imprimirVetor(contato* vetor, int tam) {
    for (int i = 0; i <= tam - 1; i++) {
        cout << vetor[i].id << " - ";
        cout << vetor[i].nome << " - ";
        cout << vetor[i].numero << endl;
    }
}
void salvarVetorNoArquivo(contato* vetor, int tam){

    ofstream arquivoSaida("contatos.txt");

    for (int i = 0; i <= tam - 1; i++) {
        arquivoSaida << vetor[i].id << " - ";
        arquivoSaida << vetor[i].nome << " - ";
        arquivoSaida << vetor[i].numero<< endl;
    }
    arquivoSaida.close();

    cout << "Contato atualizado com sucesso!" << endl;
}

int main(){	
/*	
	string caminhoPasta = "cachorro.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta.c_str());
    
	arquivoSalvo << "id: 1" << endl;
	arquivoSalvo << "nome: toto" << endl;
	arquivoSalvo << "sexo: m" << endl;
	arquivoSalvo << "idade: 3" << endl;

	arquivoSalvo.close();
	
	ifstream arquivoLido;
    arquivoLido.open(caminhoPasta.c_str());
			
	float idade, id;
	string nome, lixo;
	char sexo;
	arquivoLido >> lixo;
	arquivoLido >> id;
	arquivoLido >> lixo;
	arquivoLido >> nome;
	arquivoLido >> lixo;
	arquivoLido >> sexo;
	arquivoLido >> lixo;
	arquivoLido >> idade;
	
	arquivoLido.close();
	
	cout << "id: "<< id  << endl;
	cout << "nome: "<< nome << endl;
	cout << "sexo: "<< sexo << endl;
	cout << "idade: "<< idade << endl;
*/
/*
	string caminhoPasta = "matriz4x4.txt";
    ifstream arquivoLido;
    arquivoLido.open(caminhoPasta.c_str());
    
    int num=0;
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++){
    		arquivoLido >> num;
    		cout << num << " ";
		}
		cout << endl;
	}
	arquivoLido.close();
*/
/*
	string caminhoPasta = "estudantes.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta.c_str());
    
    int matri;
    string nome, curso;
	cout << "informe seu numero de matricula: ";
	cin >> matri;
	cout << "informe seu nome: ";
	cin >> nome;
	cout << "informe seu curso: ";
	cin >> curso;
	arquivoSalvo << matri << endl;
	arquivoSalvo << nome << endl;
	arquivoSalvo << curso << endl;
	arquivoSalvo.close();
*/
/*
	string caminhoPasta = "produtos.txt";
	ifstream arquivoLido;
    arquivoLido.open(caminhoPasta.c_str());
    string lixo;
    string nome;
    float preco;
    
    for(int i=0; i<3; i++){
    	arquivoLido>> lixo;
    	arquivoLido>> lixo;
   		arquivoLido>> nome;
    	arquivoLido>> lixo;
    	arquivoLido>> preco;
    	if(preco>50.0){
    		cout << nome << " R$" << preco;
		}
	}
	
	arquivoLido.close();
*/
	string caminhoPasta = "contatos.txt";
	ifstream arquivoLido;
    arquivoLido.open(caminhoPasta.c_str());
    
    string lixo;
    int tam=3;
	contato *contatos= new contato[3];
    
    for(int i=0; i<3; i++){
    	arquivoLido>> contatos[i].id;
    	arquivoLido>> lixo;
   		arquivoLido>> contatos[i].nome;
    	arquivoLido>> lixo;
    	arquivoLido>> contatos[i].numero;
	}
	imprimirVetor(contatos, tam);
	int idd;
	
	cout << "qual o id do contato que deseja alterar? ";
	cin >> idd;
	cout << "qual o novo numero?";
	cin >> contatos[idd].numero;
	
	salvarVetorNoArquivo(contatos, tam);
    
    imprimirVetor(contatos, tam);
	
	arquivoLido.close();
	return 0;
}