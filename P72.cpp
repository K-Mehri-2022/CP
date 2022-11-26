#include <iostream>

using namespace std ;

main() {
	int m , n ;
	int i=0 ;
	
	cin >> m >> n ;
	
	while(m>=n){
		i += 1 ;
		m -= n ;
	}
	
	cout << " kharejegesmat :" ;
	cout << i;
	
	cout << " baghimandeh :" ;
	cout << m ;
}