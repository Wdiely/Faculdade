#include<iostream>
using namespace std;


void imprime(){
		cout << "------------------------- " << endl;
		cout << "       Cedula digital     " << endl;
		cout << "------------------------- " << endl;
		cout << "1 - Candidato A " << endl;
		cout << "2 - Candidato B " << endl;
		cout << "3 - Candidato C " << endl;
		cout << "4 - Voto Nulo   " << endl;
		cout << "5 - Voto Branco   " << endl;
		cout << "0 - Sair   " << endl;
		cout << "------------------------- " << endl;
		cout << "Escolha uma opção:";
}

void funcao(){
	int cand1= 0, cand2= 0, cand3 =0, nulo= 0, branco= 0;
	int voto;
	          
		do{
			cout << "qual opcao deseja? ";
			cin >> voto;
			if(voto==1){
				cand1= cand1 + 1;
			}else if(voto==2){
				cand2= cand2 + 1;
			}else if(voto==3){
				cand3= cand3 + 1;
			}else if(voto==4){
				nulo= nulo + 1;
			}else if(voto==5){
				branco= branco + 1;
			}else if(voto==0){
				cout << "programa finalizado." << endl;
			}else{
				nulo= nulo + 1;
			}
		}while(voto!=0);
	
	float total= cand1+cand2+cand3+nulo+branco;
	float pernulo= (nulo/total)*100;
	float perbranco= (branco/total)*100;
	
	cout << "quantidade de votos no candidato A: " << cand1 << endl;
	cout << "quantidade de votos no candidato B: " << cand2 << endl;
	cout << "quantidade de votos no candidato C: " << cand3 << endl;
	cout << "quantidade de votos nulos: " << nulo << " porcentagem: " << pernulo << endl;
	cout << "quantidade de votos em branco: " << branco << " porcentagem: " << pernulo << endl;
}

int main(){
	
	imprime();
	funcao();
	
	return 0;
}