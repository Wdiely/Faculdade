#include<iostream>
using namespace std;

int main() {
    int vetor[7];
    int aux;

    for (int i = 0; i < 7; i++) {
        cin >> vetor[i];
    }

    // Ordenação crescente
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < 7; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}