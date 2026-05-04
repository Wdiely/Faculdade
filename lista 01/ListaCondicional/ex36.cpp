#include<iostream>
#include<math.h>
using namespace std;

void pessoas(){
	float brutus = 122/ (1.84*1.84);
	float olivia = 45/ (1.76*1.76);
	float pesob = 25 * (1.84*1.84);
	float pesoo = 18.5 * (1.76*1.76);
	float kilosb = 122-pesob;
	float kiloso = pesoo-45;
	cout << "o IMC de brutos e: " << brutus << " e falta perder " << kilosb << " kilos para ficar saudavel" << endl;
	cout << "o IMC de olivia e: " << olivia << " e falta ganhar " << kiloso << " kilos para ficar saudavel" << endl;
}

void imc(float altura, float peso){

	float imc= peso/(altura*altura);
		if(imc<16){
			cout << "seu IMC e: " << imc << " <magreza grave>";
		}else if( imc <17){
			cout << "seu IMC e: " << imc << " <magreza moderada>";
		}else if( imc <18.5){
			cout << "seu IMC e: " << imc << " <magreza leve>";
		}else if( imc <25){
			cout << "seu IMC e: " << imc << " <saudavel>";
		}else if( imc <30){
			cout << "seu IMC e: " << imc << " <sobrepeso>";
		}else if( imc <35){
			cout << "seu IMC e: " << imc << " <obesidade grau I>";
		}else if( imc <40){
			cout << "seu IMC e: " << imc << " <obesidade grau II(severa)>";
		}else{
			cout << "seu IMC e: " << imc << " <obesidade grau III(mobida)>";
		}
}

int main(){
	pessoas();
	
	float a,p;
	
	cout << "digite a sua altura em metros: ";
	cin >> a;
	cout << "digite seu peso em kilos: ";
	cin >> p;
	
	imc(a,p);
}