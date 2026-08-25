#include <iostream>
#include "Lista.h"
#include "Produto.h"

using namespace std;

int main() {
    Lista minhaLista(10);

    for (int i = 0; i < 4; i++) {
        Produto p;
        cout << "\nPreenchendo o Produto " << i << ":" << endl;
        p.preencher();
        
        minhaLista.insert(p, 0);
    }
    minhaLista.imprimir();

    Produto pExtra;
    cout << "Preenchendo o produto extra:" << endl;
    pExtra.preencher();
    minhaLista.insert(pExtra, 2);
    minhaLista.imprimir();


    minhaLista.remove(1);
    minhaLista.imprimir();

    return 0;
}