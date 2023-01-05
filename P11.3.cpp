#include <iostream>

using namespace std;

int main(){
	
	int x = 1;
	int A[3] = {2 , 3 , 4};
	int *p = &A[1];
	
	cout << *p << endl << p;
}