#include <iostream>

using namespace std;

main() {
	int n,s;
	
	cout << "please enter a positive integer number: ";
	cin >> n;
	s=0;
	
	while ( n > 0 ){
		s = s + n%10;
		n = n/10;
	}
    cout << s;
}