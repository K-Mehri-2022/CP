#include <iostream>

using namespace std;

main() {
	
	int a[]={20,21,22,23,24,25,26,27,28};
	int n , i , j , temp;
	
	cout << "Please enter an integer value : ";
	cin >> n;
	
	for(i=0; i<9; i++){
		for(j=0; j<9-i; j++){
		    if(a[j]>a[j+1]){
		    	
		    	temp = a[j];
		    	a[j] = a[j+1];
		    	a[j+1] = temp;
		    	
			}
		}
	}
		
		cout << "Result of this array : ";
		     for(i=0; i<=9; i++){
		     	cout << a[i] << " ";
		}
		
}