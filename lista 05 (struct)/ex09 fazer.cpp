#include <iostream>
#include <cmath>
using namespace std;

struct Triangulo {
    float xA, yA;
    float xB, yB;
    float xC, yC;

    float area() {
        return fabs((xA * (yB - yC) +
                     xB * (yC - yA) +
                     xC * (yA - yB)) / 2.0);
    }
};

int main() {
    Triangulo t;

    cout << "Digite as coordenadas do ponto A (x y): ";
    cin >> t.xA >> t.yA;

    cout << "Digite as coordenadas do ponto B (x y): ";
    cin >> t.xB >> t.yB;

    cout << "Digite as coordenadas do ponto C (x y): ";
    cin >> t.xC >> t.yC;

    cout << "Area = " << t.area() << endl;

    return 0;
}
