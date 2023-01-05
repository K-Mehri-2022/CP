#include <iostream>

using namespace std;

int main(){
	
	int x = 120;
	int *p;
	p = &x;
	
	cout << "x is "<< x << "\n" << endl;
	cout << "&x (address of x) is " << &x << "\n" << endl; 
	cout << "P is " << p << "\n";
	
}