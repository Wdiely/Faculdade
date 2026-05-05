#include<iostream>
#include<math.h>
using namespace std;

   void maior(float a, float b, float c){
   	if (a >= b && a >= c) {
        cout << "O maior numero entre os tres e: " << a;
        
    }else if (b >= a && b >= c) {
        cout << "O maior numero entre os tres e: " << b;
   		
	}else{
	   	cout << "o maior numero entre os tres e: " << c;
	}
	
	}
	
	int main (){
		float a,b,c;
		
		cout << "digite um numero: ";
		cin >> a;
		cout << "digite outro numero: ";
		cin >> b;
		cout << "digite outro numero: ";
		cin >> c;
		
		maior(a,b,c);
		return 0;
	}