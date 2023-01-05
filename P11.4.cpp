#include <iostream>

using namespace std;

int main(){
	
	int x = 100;
	int *p;
	
	p = &x;
	
	cout << "x is " << x << "\n\n";
	
	*p = 50;
	cout << "x is " << x << "\n";
	
}