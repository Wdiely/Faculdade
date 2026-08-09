#include <iostream>

using namespace std;

//forma tradicional usando Laço
float somatorioEx51_old(int n){
    float soma = 0;
    float parcela = 0;

    for(int i=1; i<= n; i++){
		parcela = i/(2.0*i-1.0);
        soma = soma + parcela;       
    }
    return soma;
}

//Usando RECURSIVIDADE
float somatorioEx51(int i, int max){
    float soma = 0;
    if(i == max)
        return i/(2.0*i-1.0);
    else{
        return i/(2.0*i-1.0) + somatorioEx51(i+1, max);
    }
    return soma;
}

int main(){
    int tam;
    do{
		cout << "Informe o tamanho da serie:";
		cin >> tam;
		if(tam < 0){
			cout << "Error - valor inválido.";
		}
	}while(tam < 0);

    float soma = somatorioEx51(1, tam);
    cout << "O somatorio eh:" << soma << endl;
    return 0;
}