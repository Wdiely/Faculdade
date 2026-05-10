#include<iostream>
using namespace std;

int main (){
	float nota = 0;
	
	do{
		cout << "digite sua nota: ";
		cin >> nota;
		nota++;
	}while(nota>=0);
	
	return 0;
}