#include <iostream>

using namespace std;

void rd5(int *list , int s){
	
	for(int i=0; i<s; i++){
		list[i] = list[i]%5;
	}
}

int main(){
	
	int Array[] = {11,21,101,10,49,222,65};
	int k;
	
	cout << "\nBefore the remainder of dividing the Array values by 5 :\n " ;
	for(k=0; k<7; k++){
		cout << Array[k] << " ";
	}
	
	rd5(Array,7);
	cout << endl << "\nAfter the remainder of dividing the Array values by 5 :\n ";
	for(k=0; k<7; k++){
		cout << Array[k] << " ";
	}
	
}