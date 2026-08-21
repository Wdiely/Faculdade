#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista(){
	quant = 0;
	cout << "qual o tamanho da lista? ";
	cin >> tam;
	lista = new produto [tam];
}

Lista::Lista(const Lista &outra){
	quant= outra.quant;
	tam= outra.tam;
	
	for(int i=0; i<tam; i++){
		lista[i]=copiar(outra.getLista()[i])
	}
}

bool Lista::temEspaco(){
	if(quant<tam){
		return true;
	}else{
		return false;
	}
}
bool Lista::isEmpty(){
	
}
bool Lista::indiceValido(int i){
	
}

void Lista::shiftfront(int ate){
	for(int i=ate; ate<quant; ate++){
		lista[i].copiar(lista[i+1]);
	}
}
void Lista::shiftEnd(int aPartir){
	if(temEspaco() && !isEmpty()){
		for(int i= quant-1; i>aPartir; i--){
			lista[i].copiar(lista[i-1])
		}
	}
}


void Lista::insert();
	if(!temEspaco()){
		cout << "a lista esta cheia. " << endl;
	}else{
		shiftEnd(0);
		lista[0].preencher();
		quant++;
	}
}

void Lista::insert(int posicao){
	if(!temEspaco()){
		cout << "a lista esta cheia. " << endl;
	}else{
		shiftEnd(posicao);
		lista[posicao].preencher();
		quant++;
	}
}
//?
void Lista::insert(int posicao){
	if(!temEspaco()){
		cout << "a lista esta cheia. " << endl;
	}else{
		shiftEnd(posicao);
		lista[posicao].preencher();
		quant++;
	}
}

void Lista:remove(){
	if(!isEmpty(){
		shiftFront();
		quant--;
	}
}
void Lista:remove(int posicao){
		if(!isEmpty(){
		shiftFront(posicao);
		quant--;
	}
}