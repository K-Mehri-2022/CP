#include <iostream>

using namespace std;

main() {
	int a[10];
	int  min , i , max ;
	float s , average;
	
	s=0.0;
	
	for(i=0; i<10; i++){
		cin >> a[i];
	}
	
	min=a[0];
	for(i=0; i<10; i++){
	    if(a[i] < min){
	    	min = a[i];
	    }
	}
	cout << "Minimum Of Entered Numbers is " << min;
	
	max=a[0];
	for(i=0; i<10; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	cout << "\nMaximum Of Entered Numbers is " << max;
	
	s = max + min ;
	
	average = s / 2 ;
	
	cout << "\nResult Of Average : " << average ;
	
}