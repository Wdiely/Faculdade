#include <iostream>
using namespace std;

void par(int numero){
    if(numero % 2 == 0) {
        cout << "O numero e par" << endl;
    }else{          
        cout << "O numero e impar" << endl;      
    }
}

void posit(int numero){
    if(numero < 0) {
        cout << "e negativo" << endl;
    }else{          
        cout << "e positivo" << endl;      
    }
}

int main(){
    int a;
    cout << "Informe um numero: ";
    cin >> a;
    
    par(a); posit(a);
    return 0;
}