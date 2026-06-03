#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float num;
	float *vetor= new float [10];
	
	for(int i=0; i<10; i++){
		cout << "digite um numero: ";
		cin >> num;
		
		if(num<0){
			vetor[i]=-1;
		}else{
			vetor[i]=sqrt(num);
		}
	}
	
	for(int i=0; i<10; i++){
		cout << vetor[i] << endl;
	}
	
	return 0;
}