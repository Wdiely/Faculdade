#include<iostream>
#include<math.h>
using namespace std;

struct retan{
	float raio;
};

void preencher(retan &P){
	cout << "digite o raio: " << endl;
	cin >> P.raio;
}

float area(retan &P){
	return 3.14 * (P.raio * P.raio);
}
float perimetro(retan &P){
	return 2 * 3.14 * P.raio;
}

int main(){
	retan P1;
	preencher(P1);
	cout << "area: " << area(P1) << endl;
	cout << "perimetro: " << perimetro(P1);
	return 0;
}