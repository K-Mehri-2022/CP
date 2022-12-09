#include <iostream>

using namespace std;

const int n=10;

main() {
	
	int a[n]={20,21,22,23,24,25,26,28,30};
	int m , i , j , z;
	
	cout << "Please enter an integer value : ";
	cin >> m;
	
	a[9]=m;
	for(i=0; i<n; i++){
		for(j=0; j<(n-i); j++){
		    if(a[j]>a[j+1]){
		    	
		    	z = a[j];
		    	a[j] = a[j+1];
		    	a[j+1] = z;
		    	
			}
		}
    }
            cout << "Result of this array : ";
		    for(i=0; i<n; i++){
		    cout << " " << a[i];
		}	
}