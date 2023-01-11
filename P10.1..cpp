/* Taylor Series */
// sinx , cosx , tanx 

#include <iostream>
#include <math.h>
#include <conio.h>

#define _USD_MATH_DEFINES

using namespace std;

int power(int a,int b){

    int p = 1;
	for(int i=1; i<=b; i+=2){
		p = p*a;
	}
	return p;
}

int fact(int n){
	
	int f = 1;
	for(int i=2; i <= n; i+=2){
		f = f*i;
	}
	return f;
}

float sin(int x){
	
	float t , s = 0 , flag;
	for(int i=1; i<7; i+=2){
		
		t = power(x,i)/fact(i);
    	if(flag == 0.0){
		s = s + t;
		flag = 1;
    	}
		
		else{
		s = s - t;
		flag = 0;
	    }
	}
	return s;
}

float cos(int x){
	
	float t , c = 0 , flag;
	for(int i=1; i<6; i+=2){
		
		t = power(x,i)/fact(i);
		
		if(flag == 0.0){
		c = c + t;
		flag = 1;
    	}
		
		else{
		c = c - t;
		flag = 0;
	    }
	}
	return c; 
}

float tan(int x){
	
	float tan;
	int n;
	
	tan = (float)sin(n)/cos(n);
	
	return tan;	
}
	
int main(){
	
	int n;
	cout << "Enter n = ";
	cin >> n;
	double x = n * 3.141592653589793/180;
	cout << endl;
	cout << "sinx = " << sin(x) << endl;
	cout << "cosx = " << cos(x) << endl;
	cout << "tanx = " << tan(x);
	
	getch();
	
}