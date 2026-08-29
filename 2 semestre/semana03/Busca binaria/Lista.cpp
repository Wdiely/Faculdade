#include "Lista.h"

Lista::Lista(){
	contadorBinario=0;
	contadorBruto=0;
	tam= 0;
	quant= 0;
	cout << "qual o tamanho da lista?";
	cin >> tam;
	lista= new Produto[tam];
}
Lista::Lista(int tamanho){
	contadorBinario=0;
	contadorBruto=0;
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
void Lista::setBinario(int contador){
    this->contadorBinario = contador;
}
void Lista::setBruto(int contador){
    this->contadorBruto = contador;
}

int Lista::getBinario(){
    return contadorBinario;
}
int Lista::getBruto(){
    return contadorBruto;
}
int Lista::getQuant(){
    return quant;
}
int Lista::getTam(){
    return tam;
}

int Lista::buscaBinaria(int codigoProcurado) {
    contadorBinario = 0;
    int inicio = 0;
    int fim = tam - 1;
    int meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        contadorBinario++;
        
        if (lista[meio].getCodigo() == codigoProcurado)
            return meio;
        else if (codigoProcurado < lista[meio].getCodigo()) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int Lista::buscaBruta(int codigoProcurado) {
    contadorBruto = 0;
    for (int i = 0; i <= quant - 1; i++) {
    	contadorBruto++;
        if (lista[i].getCodigo() == codigoProcurado)
            return i;     
    }
    return -1;
}