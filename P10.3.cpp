#include <iostream>
#include <conio.h>

using namespace std;

int gcd(int n , int m){
	
	int g = 0;
	for(int i=1; i <= n && i <= m; i++){
		if(n%i == 0 && m%i == 0){
			g = i;
		}
	}
	return g;
}

int main(){
	
	int x , y;
	cout << "Please enter two integer values " << endl;
	cout << "First integer value : ";
	cin >> x;
	cout << "Second integer value : ";
	cin >> y;
	
	cout << "GCD of " << x << " and " << y << " is " << gcd(x,y);
	
	getch();
	
}