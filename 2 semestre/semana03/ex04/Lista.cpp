#include "Lista.h"

Lista::Lista(){
	tam= 0;
	quant= 0;
	cout << "qual o tamanho da lista?";
	cin >> tam;
	lista= new Produto[tam];
}
Lista::Lista(int tamanho){
	tam= tamanho;
	quant= 0;
	lista= new Produto[tam];
}

void Lista::insert(Produto &novo, int posicao){
	if(posicao<0 or posicao>quant){
		cout << "posicao invalida." << endl;
	}else if(quant<tam){
		shiftEnd(posicao);
		lista[posicao].copiar(novo);
		quant ++;
	}else{
		cout << "a lista esta cheia." << endl;
	}
}
void Lista::remove(int posicao){
	if(posicao<0 or posicao>quant){
		cout << "posicao invalida." << endl;
	}else if(quant>0){
		shiftFront(posicao);
		quant --;
	}else{
		cout << "a lista esta vazia." << endl;
	}
}

void Lista::shiftEnd(int posicao){
	for(int i=quant; i>posicao; i--){
	lista[i].copiar(lista[i-1]);
	}
}
void Lista::shiftFront(int posicao){
	for(int i=posicao; i<quant; i++){
		lista[i].copiar(lista[i+1]);
	}
}

void Lista::imprimir() {
    if (quant == 0) {
        cout << "Lista vazia." << endl;
        return;
    }

    cout << "--- Conteudo da Lista ---" << endl;
    for (int i = 0; i < quant; i++) {
        cout << "Item [" << i << "]:" << endl;
        lista[i].imprimir();
    }
    cout << "-------------------------" << endl;
}

void Lista::setQuant(int quant){
    this->quant = quant;
}
void Lista::setTam(int tam){
    this->tam = tam;
}

int Lista::getQuant(){
    return quant;
}
int Lista::getTam(){
    return tam;
}

//

float Lista::precomedio(){
	float soma=0;
	for(int i=0; i<quant; i++){
		soma += lista[i].getPreco();
	}
	
	return soma/quant;
}
void Lista::abaixode100(){
	cout << "lista de produtos com menos de 100 itens no estoque: " << endl;
	for(int i=0; i<quant; i++){
		if(lista[i].getEstoque()<100){
			lista[i].imprimir();
			cout << endl;
		}
	}
}
float Lista::lucro(){
	float soma=0;
	for(int i=0; i<quant; i++){
		soma += lista[i].getLucro();
	}
	return soma;
}
void Lista::troca(int posi1, int posi2){
	if(posi1<0 or posi1>quant or posi2<0 or posi2>quant){
		cout << "posicao invalida." << endl;
	}else if(posi1==posi2){
		cout << "o produto e o mesmo" << endl;
	}else{
		Produto aux;
		aux=lista[posi1];
		remove(posi1);
		insert(lista[posi2], posi1);
		remove(posi2);
		insert(aux, posi2);
	}
}