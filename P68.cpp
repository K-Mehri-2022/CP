#include <iostream>

using namespace std;

main() {
	
	int n , j , fact;
	
	cout << "please enter an integer number : ";
	cin >> n;
	fact = 1;
	
	for ( j=2; j<=n; j++ ){
		fact*=j;
	}
	
	cout << n << "! is " << fact;
}