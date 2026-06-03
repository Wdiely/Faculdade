#include <iostream>
using namespace std;

int main(){
	
	int vetor[5];
	
	for(int i=0; i<5; i++){
		cin>>vetor[i];	
	}
	
	for(int i=4; i>=0; i--){
		cout<<vetor[i]	;
	}
}