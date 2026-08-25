#include "Lista.h"

Lista::Lista(){
	tam= 0;
	quant= 0;
	cout << "qual o tamanho da lista?";
	cin >> tam;
	lista= new Livro[tam];
}
Lista::Lista(int tamanho){
	tam= tamanho;
	quant= 0;
	lista= new Livro[tam];
}

void Lista::insert(Livro &novo, int posicao){
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
	for(int i=posicao; i<quant-1; i++){
		lista[i].copiar(lista[i+1]);
	}
}


Livro* Lista::buscar(int id){
	for(int i=0; i<quant; i++){
		if(lista[i].getId()==id){
			return &lista[i];
		}
	}
	return nullptr;
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