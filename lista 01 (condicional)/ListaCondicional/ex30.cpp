#include<iostream>
#include<math.h>
using namespace std;

   bool saoMultiplos(int a, int b) {
    if (a % b == 0 || b % a == 0) {
        return true;
    }else{
    	return false;
	}
}

int main() {
    int a, b;

    cout << "digite dois valores: ";
    cin >> a >> b;

    if (saoMultiplos(a, b)==1) {
        cout << "sao multiplos" << endl;
    } else {
        cout << "nao sao multiplos" << endl;
    }

    return 0;
}