#include <iostream>
using namespace std;

struct Vetor {
    float x, y, z;

    float produtoEscalar(Vetor v) {
        return x * v.x + y * v.y + z * v.z;
    }
};

int main() {
    Vetor v1, v2;

    cout << "Digite as coordenadas do primeiro vetor (x y z): ";
    cin >> v1.x >> v1.y >> v1.z;

    cout << "Digite as coordenadas do segundo vetor (x y z): ";
    cin >> v2.x >> v2.y >> v2.z;

    cout << "Produto escalar = " << v1.produtoEscalar(v2) << endl;

    return 0;
}