#include<iostream>
using namespace std;

int main() {
    double populacaoA, populacaoB;
    double taxaA, taxaB;
    int anos = 0;
    char repetir;

    do {
        cout << "digite a populacao do pais A: ";
        cin >> populacaoA;
        while (populacaoA <= 0) {
            cout << "erro! A populacao deve ser maior que 0." << endl;
            cout << "digite novamente a populacao do pais A: ";
            cin >> populacaoA;
        }

        cout << "digite a populacao do pais B: ";
        cin >> populacaoB;
        while (populacaoB <= 0) {
            cout << "erro! A populacao deve ser maior que 0." << endl;
            cout << "digite novamente a populacao do pais B: ";
            cin >> populacaoB;
        }


        cout << "digite a taxa de crescimento do pais A (%): ";
        cin >> taxaA;
        while (taxaA <= 0) {
            cout << "erro! A taxa deve ser maior que 0." << endl;
            cout << "digite novamente a taxa do pais A: ";
            cin >> taxaA;
        }

        cout << "digite a taxa de crescimento do pais B (%): ";
        cin >> taxaB;
        while (taxaB <= 0) {
            cout << "erro! A taxa deve ser maior que 0." << endl;
            cout << "digite novamente a taxa do pais B: ";
            cin >> taxaB;
        }


        while (populacaoA < populacaoB) {
            populacaoA = populacaoA + ( 1 + taxaA / 100);
            populacaoB = populacaoB + (1 + taxaB / 100);
            anos++;
        }

        cout << "\nquantidade de anos necessarios: " << anos << endl;
        cout << "populacao final de A: " << populacaoA << endl;
        cout << "populacao final de B: " << populacaoB << endl;

        cout << "\ndeseja repetir a operacao? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' or repetir == 'S');

    return 0;
}