#include <iostream>

using namespace std;

int main(){
	
	int x , y;
	int *p , *q;
	
	p = &x;
	q = &y;
	
	if (p==q){
		cout << "\np & q are pointing to same location ";
	}
	else {
		cout << "\np & q are pointing to different locations ";
	}
	cout <<  endl;
}
