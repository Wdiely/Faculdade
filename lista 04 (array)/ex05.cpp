#include <iostream>
using namespace std;

void func(int *vetor1){
	int num=0;
	int cont=0;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	for(int i = 0;i<20;i++){
		if(vetor1[i] == num){
			cont+=1;		
		}
	}
	cout << "esse numero aparece " << cont << " vezes";
}

int main(){
	int *vetor1= new int [10];
	
	for(int i=0; i<10;i++){
		cout<<"vetor "<<i<<": ";
		cin>>vetor1[i];
	}
	
	func(vetor1);
	
	return 0;
}