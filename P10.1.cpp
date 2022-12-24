/* Taylor Series */
// sinx , cosx , tanx 

#include <iostream>
#include <math.h>
#include <conio.h>

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

float sin(int n , int x){
	
	float t , s = 0;
	for(int i=1; i<n; i+=2){
		
		t = power(x,i)/fact(i);
		s = s + t;
		s = s - t;
	}
	return s;
}

float cos(int n , int x){
	
	float t , c = 0;
	for(int i=1; i<n; i+=2){
		
		t = power(x,i)/fact(i);
		c = c + t;
		c = c - t;
	}
	return c; 
}

float tan(int s , int c){
	
	float tan;
	int n;
	
	tan = (float)sin(n)/cos(n);
	
	return tan;	
}
	
int main(){
	
	int n , x;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter x = ";
	cin >> x;
	cout << "sinx = " << sin(n) << endl;
	cout << "cosx = " << cos(n) << endl;
	cout << "tanx = " << tan(n);
	
	getch();
	
}