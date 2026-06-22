#include<iostream>
#include<math.h>
using namespace std;

struct retan{
	float largura;
	float altura;
};

void preencher(retan &P){
	cout << "digite a largura: " << endl;
	cin >> P.largura;
	cout << "digite a altura: " << endl;
	cin >> P.altura;
}

float area(retan &P){
	float area= P.altura * P.largura;
	return area;
}
float perimetro(retan &P){
	float perimetro= (P.altura + P.largura) *2;
	return perimetro;
}

int main(){
	retan P1;
	preencher(P1);
	cout << "area: " << area(P1) << endl;
	cout << "perimetro: " << perimetro(P1);
	return 0;
}