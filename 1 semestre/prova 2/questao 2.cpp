#include <iostream>
using namespace std;

int prodimparRE(int qtd) {
	int num;

    if (qtd == 0) {
        return 1;
    }

    cout << "Digite o numero: ";
    cin >> num;

    int produto = prodimparRE(qtd - 1);

    if (num % 2 != 0) {
        produto *= num;
        cout << "Parcial: " << produto << endl;
    }
    else {
        cout << "Par ignorado: " << produto << endl;
    }

    return produto;
}

int main() {
    int qtde;

    cout << "Quantos numeros? ";
    cin >> qtde;

    if (qtde <= 0) {
        cout << "Qtde invalida." << endl;
        return 1;
    }

    int resultado = prodimparRE(qtde);

    cout << "Produtorio: " << resultado;

    return 0;
}