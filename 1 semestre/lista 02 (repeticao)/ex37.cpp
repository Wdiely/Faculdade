#include <iostream>
using namespace std;

int main() {
    int codigo;
    int codMaisAlto, codMaisBaixo, codMaisGordo, codMaisMagro;
    int quantidade = 0;

    float altura, peso;
    float maiorAltura, menorAltura;
    float maiorPeso, menorPeso;
    float somaAlturas = 0, somaPesos = 0;

    cout << "Digite o codigo do cliente (0 para encerrar): ";
    cin >> codigo;

    while (codigo != 0) {
        cout << "Altura: ";
        cin >> altura;

        cout << "Peso: ";
        cin >> peso;

        if (quantidade == 0) {
            maiorAltura = menorAltura = altura;
            maiorPeso = menorPeso = peso;

            codMaisAlto = codMaisBaixo = codigo;
            codMaisGordo = codMaisMagro = codigo;
        }

        if (altura > maiorAltura) {
            maiorAltura = altura;
            codMaisAlto = codigo;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
            codMaisBaixo = codigo;
        }

        if (peso > maiorPeso) {
            maiorPeso = peso;
            codMaisGordo = codigo;
        }

        if (peso < menorPeso) {
            menorPeso = peso;
            codMaisMagro = codigo;
        }

        somaAlturas += altura;
        somaPesos += peso;
        quantidade++;

        cout << "\nDigite o codigo do cliente (0 para encerrar): ";
        cin >> codigo;
    }

    if (quantidade > 0) {
        cout << "\nCliente mais alto:" << endl;
        cout << "Codigo: " << codMaisAlto << " | Altura: " << maiorAltura << endl;

        cout << "\nCliente mais baixo:" << endl;
        cout << "Codigo: " << codMaisBaixo << " | Altura: " << menorAltura << endl;

        cout << "\nCliente mais gordo:" << endl;
        cout << "Codigo: " << codMaisGordo << " | Peso: " << maiorPeso << endl;

        cout << "\nCliente mais magro:" << endl;
        cout << "Codigo: " << codMaisMagro << " | Peso: " << menorPeso << endl;

        cout << "\nMedia das alturas: " << somaAlturas / quantidade << endl;

        cout << "Media dos pesos: " << somaPesos / quantidade << endl;
    } else {
        cout << "Nenhum cliente cadastrado." << endl;
    }

    return 0;
}