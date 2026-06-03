#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    double logs[8];

    for (int i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> num;

        if (num > 0) {
            logs[i] = log10(num);
        } else {
            logs[i] = -1;
        }
    }
    
    cout << "\nValores armazenados no vetor:\n";
    for (int i = 0; i < 8; i++) {
        cout << logs[i] << endl;
    }

    return 0;
}