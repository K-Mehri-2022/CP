#include <iostream>

using namespace std;

main() {
	int m,n,w,z;
	
	   cout <<"Please Enter Two Positive Integer Values :" ;
	   cin >> m >> n;
	
	w = m * 1/n ;
	z = m - (n*w);
	
	   cout << "m/n" << ":" << w << " and " << "m%n" << ":"<< z ;
	
    }