#include <iostream>
using namespace std;

void func(int *vetor1){
	int num=0;
	int tam2=20;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	for(int i = 0;i<20;i++){
		if(vetor1[i] == num){
			tam2-=1;		
		}
	}
	
	if(tam2 == 20) {
        cout << "O numero nao existe no vetor.\n";
    }else{
		int *vetor2 = new int [tam2];
		int x=0;
		
		for(int j=0;j<20;j++){
				if(vetor1[j] != num){
					vetor2[x]=vetor1[j];
					cout<< vetor2[x] <<endl;
					x++;
				}
		}
	}
}

int main(){
	int *vetor1= new int [20];
	
	for(int i=0; i<20;i++){
		cout<<"vetor "<<i<<": ";
		cin>>vetor1[i];
	}
	
	func(vetor1);
	
	return 0;
}