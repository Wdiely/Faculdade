#include<iostream>
#include<math.h>
using namespace std;

int main () {
	float a=1;
	float b=2;
	float c=3;
	float d=4;
	float e=5;
	float f=6;
	float x= (c*e-b*f)/(a*e-b*d);
	float y= (a*f-c*d)/(a*e-b*d);
	cout << "x= " << x << "  y= " << y;
	return 0;
}