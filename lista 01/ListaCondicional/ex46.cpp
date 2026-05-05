#include<iostream>
#include<math.h>

using namespace std;

float funcao(float kw){
	float preco;
	if(kw<100)
		preco= (kw * 0.5) * 1.2;
	else if(kw<200) 
		preco= (kw * 0.75) * 1.2;
	else if(kw<250)
		preco= (kw * 1.2) * 1.2;
	else
		preco= (kw * 1.5) * 1.2;
		
	return preco;
}

int main(){
	float kw;
	cout << "quantos kW voce usou esse mes? ";
	cin >> kw;
	
	cout << "voce pagara " << funcao(kw) << " reais";
	return 0;
}