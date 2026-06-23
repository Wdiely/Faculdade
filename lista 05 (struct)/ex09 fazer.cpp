#include <iostream>
#include <cmath>
using namespace std;

struct tri {
    double a;
    double b;
    double c;
    
    double calcularDistancia(tri& p1) {
	    double distanciaX = p1.x - p2.x;
		double distanciaY = p1.y - p2.y;
	    return sqrt(distanciaX * distanciaX + distanciaY * distanciaY);
	}
};


int main() {
    tri p1;
    cout << "coordenadas ponto a: ";
    cin >> p1.a;
    cout << "coordenadas ponto b: ";
    cin >> p1.b;
	cout << "coordenadas ponto c: ";
    cin >> p1.c;
    
    double distancia = calcularDistancia(p1);
    cout << "a distancia entre os pontos e: " << distancia << endl;

    return 0;
}
