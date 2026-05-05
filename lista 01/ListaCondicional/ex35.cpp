#include<iostream>
#include<math.h>
using namespace std;

void bask(float a, float b, float c){
	float delta= (b*b)-4*a*c;
	float x1= (-b + sqrt (delta) )/2*a;
	float x2= (-b - sqrt (delta) )/2*a;
	if(delta>=0){
		cout << "delta e: " << delta << endl;
		cout << "x1 e: " << x1 << endl;
		cout << "x2 e: " << x2;
	}else{
		cout << "essa equacao nao tem raizes";
	}

}
int main (){
	float a,b,c;
	cout << "informe o valor de a, b e c respectivamente: ";
	cin >> a >> b >> c;
	
	bask(a,b,c);
	return 0;
}