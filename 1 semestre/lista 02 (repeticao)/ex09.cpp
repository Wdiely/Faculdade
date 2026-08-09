#include<iostream>
using namespace std;

int main (){
	float nota = 0;
	
	do{
		cout << "digite sua nota: ";
		cin >> nota;
		if(nota<0 or nota>10){
			cout << "erro" << endl;
		}
	}while(nota<0 or nota>10);
	
	return 0;
}