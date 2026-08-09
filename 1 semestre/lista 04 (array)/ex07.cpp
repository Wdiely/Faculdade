#include<iostream>
using namespace std;

int main() {
    int impares[100];

    for (int i = 0; i < 100; i++) {
        impares[i] = 2 * i + 1;
    }

    cout << "Os 100 primeiros numeros impares sao:" << endl;

    for (int i = 0; i < 100; i++) {
        cout << impares[i] << " ";
    }

    return 0;
}