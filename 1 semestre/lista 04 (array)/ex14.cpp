#include <iostream>
using namespace std;

bool verif(int *vetor, int tam, int num) {
    if (num % 2 == 0) {
        return true;
    }

    for (int i = 0; i < tam; i++) {
        if (vetor[i] == num) {
            return true;
        }
    }

    return false;
}

int main() {
    int tam;

    cout << "Qual o tamanho do vetor? ";
    cin >> tam;

    int *vetor = new int[tam];

    for (int i = 0; i < tam; i++) {
        do {
            cout << "Vetor[" << i << "]: ";
            cin >> vetor[i];

            if (verif(vetor, i, vetor[i])) {
                cout << "Nao sao aceitos numeros pares ou repetidos." << endl;
            }

        } while (verif(vetor, i, vetor[i]));
    }

    cout << "\nValores armazenados:\n";
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}