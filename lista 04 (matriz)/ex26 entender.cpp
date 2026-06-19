#include <iostream>
using namespace std;

float determinante4x4(float m[4][4]) {
    float det = 1;

    for (int i = 0; i < 4; i++) {

        // Verifica se o pivô é zero
        if (m[i][i] == 0) {
            return 0;
        }

        // Zera os elementos abaixo da diagonal
        for (int j = i + 1; j < 4; j++) {
            float fator = m[j][i] / m[i][i];

            for (int k = i; k < 4; k++) {
                m[j][k] -= fator * m[i][k];
            }
        }
    }

    // Produto da diagonal principal
    for (int i = 0; i < 4; i++) {
        det *= m[i][i];
    }

    return det;
}

int main() {

    float matriz[4][4];

    cout << "Digite os elementos da matriz 4x4:\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "\nDeterminante = "
         << determinante4x4(matriz);

    return 0;
}