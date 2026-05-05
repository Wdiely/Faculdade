#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int dias, anos, meses, resto;

    cout << "Digite a idade em dias: ";
    cin >> dias;

    anos = dias / 365;
    resto = dias % 365;

    meses = resto / 30;
    resto = resto % 30;

    cout << "Idade: " << anos << " ano(s), " << meses << " mes(es), " << resto << " dia(s)." << endl;

    return 0;
}