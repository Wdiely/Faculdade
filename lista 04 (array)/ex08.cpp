#include<iostream>
using namespace std;

int main(){
	float num;
	float *vetor= new float [10];
	
	for(int i=0; i<10; i++){
		cout << "digite um numero: ";
		cin >> num;
		vetor[i]=num/2;
	}
	
	for(int i=0; i<10; i++){
		cout << vetor[i] << endl;
	}
	
	return 0;
}