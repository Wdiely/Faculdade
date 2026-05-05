#include<iostream>
#include<math.h>
using namespace std;

void login(string usuario, string senha){
	string usuariox= "admin";
	string senhax= "admin123";
	if((usuariox==usuario) && (senhax==senha)){
		cout << "acesso liberado";
	}else{
		cout << "acesso negado";
	}
}

int main (){
	string usuario, senha;
	cout << "digite o usuario: ";
	cin >> usuario;
	cout << "digite a senha: ";
	cin >> senha;
	
	login(usuario,senha);
	return 0;
}