#include<iostream>
using namespace std;

struct data{
	int dia;
	int mes;
	int ano;
	
	void preencher(){
		cout << "dia: ";
		cin >> dia;
		cout << "mes: ";
		cin >> mes;
		cout << "ano: ";
		cin >> ano;
	}
};

void mostrar(data &d, int tam){
	
		if(d.dia>31 or d.dia<1 or d.mes>12 or d.mes<1 or d.ano<0 or d.ano>2026){
			cout << "data invalida" << endl;
		}
	
}

int main(){
	int tam;
	cout << "quantas datas? ";
	cin >> tam;
	
	data *d= new data[tam];
	for (int i=0; i<tam; i++){
		cout << "preencha a data ["<< i+1 << "] : " << endl;
		d[i].preencher();
		mostrar(d[i],tam);
	}
	return 0;
}