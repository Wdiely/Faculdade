#include<iostream>
using namespace std;

int main(){
	int num;
	int cont11e3=0;
	int cont5=0;
	do{
		cout << "digite um numero inteiro: ";
		cin >> num;
		
		if(num%3==0 and num%11==0)
		cont11e3++;
		if(num%5==0)
		cont5++;
		
	}while(num!=0);
	
	cout << "11 e 3 : " << cont11e3-1;
	cout << "/n5 : " << cont5-1;
	
	return 0;
}