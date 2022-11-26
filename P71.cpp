#include <iostream>

using namespace std;

main() {
	int m,n,j,k;
	
	cout <<"Please Enter Two Postivie Integer Values :" ;
	cin >> m >> n;
	
	k=1;
	for(j = 1; j <= n; j++){
		k=k*m;
	}
	
	cout <<"Result"<<" : "<< k;

}