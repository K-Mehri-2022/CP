/* Taylor Series */

// sin , cos , tan 

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>

using namespace std;

int power(int w , int h){
	
	int pow = 1;
	for(int i=1; i<=h; i++){
		pow = pow * w;
	}
	return pow;
}

int fact(int x){
	
	int f = 1;
	for(int i=1; i<=x; i++){
		f = f * i;
	}
	return f;
}

int sin(int n){
	
	double t , s;
	int flag = 0;
	for(int i=1; i<=7; i+=2){
		t = power(n,i)/fact(i);
		if (flag == 0){
			s = s+t;
			flag = 1;
		}
		else{
			s = s-t;
			flag = 0;
		}
	}
	return s;
}

int cos(int n){
	
	double t , c;
	int flag = 0;
	for(int i=2; i<=6; i+=2){
		t = power(n,i)/fact(i);
		if (flag == 0){
			c = c+t;
			flag = 1;
		}
		else{
			c = c-t;
			flag = 0;
		}
	}
	return c;
}

float tan(int n){
	
	float tan;
	int x;
	
	tan = sin(x)/cos(x);
	
	return tan;
}

int main(){
	
	int x;
	cout << "Please Enter x = ";
	cin >> x;
	
	double n = x*3.14159f/180;
	
	cout << sin(n) << endl;
	cout << cos(n) << endl;
	cout << tan(n) << endl;
	
	getch();
	
}
