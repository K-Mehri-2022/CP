#include <iostream>

using namespace std;

int max(int *A , int n){
	
	int max = A[0];
	
	for(int i=1; i<n; i++){
		if(A[i] > max){
			max = A[i];
		}
	}
	return max;
}

int main(){
	
	int Data[] = {11,21,101,10,49,222,65};
	cout << "Maximum Value of Arraye = ";
	cout << max(Data,7);
}