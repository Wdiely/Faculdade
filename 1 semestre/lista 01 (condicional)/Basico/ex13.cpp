#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int seg;
	cout << "digite a duracao do evento em segundos: ";
	cin >> seg;
	
	
	int hora= seg/3600;
	int resto= seg % 3600;
	int min= resto/60;
	int segx= resto % 60;
	
	cout << "horas: "<< hora << "minutos: "<< min << " e segundos: "<< segx;
	
	return 0;
}