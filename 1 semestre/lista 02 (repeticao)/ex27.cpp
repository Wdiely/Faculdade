#include<iostream>
using namespace std;

void funcao(int eleitores){
	int cand1= 0, cand2= 0, cand3 =0;
	int voto;
	cout << "digite 1 para o primeiro candidato" << endl;
	cout << "digite 2 para o segundo candidato" << endl;
	cout << "digite 3 para o terceiro candidato" << endl;
	
	for(int i=1; i<=eleitores; i++){             
		do{
			cout << "em qual candidato voce ira votar? ";
			cin >> voto;
			if(voto==1){
				cand1= cand1 + 1;
			}else if(voto==2){
				cand2= cand2 + 1;
			}else if(voto==3){
				cand3= cand3 + 1;
			}else{
				cout << "erro, o numero digitado deve ser 1, 2 ou 3." << endl;
			}	
		}while(voto!=1 and voto!=2 and voto!=3);
	}
	
	cout << "quantidade de votos no primeiro candidato: " << cand1 << endl;
	cout << "quantidade de votos no segundo candidato: " << cand2 << endl;
	cout << "quantidade de votos no terceiro candidato: " << cand3 << endl;
}

int main(){
	int eleitores;
	cout << "quantos eleitores iram votar?";
	cin >> eleitores;
	
	funcao(eleitores);
	
	return 0;
}