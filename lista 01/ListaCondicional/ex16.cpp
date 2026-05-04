#include <iostream>
using namespace std;


string menor(int a, int b){
	
	
	if(a<b){
		int aux = 0;
		aux = a;
		a = b;
		b= aux;
		cout<<"a: "<<a<<" b: "<<b<<endl;
	}
	
	else{
		cout<<"a: "<<a<<" b: "<<b<<endl;
	}
}

int main(){
	cout<<menor(3, 4);
	return 0;	
}
