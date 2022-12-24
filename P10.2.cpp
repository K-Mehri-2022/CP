#include <iostream>
#include <conio.h>

using namespace std;

int power(int n , int m){
	
	int pow = 1;
	for(int i=1; i<=m; i++){
		pow = pow*n;
	}
	
	return pow;
}

int main(){
	
	int a , b;
	cout << "Enter first integer value : ";
	cin >> a;
	cout << "Enter second integer value : ";
	cin >> b;
	cout << "Result = " << power(a,b);
	
	getch();
}