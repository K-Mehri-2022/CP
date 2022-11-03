#include <iostream>

using namespace std;

main() {
 
int x,y,z,s,w,m;
cin >> x >> y >> z;
s=(x-y)*(x+y);
w=(x+y+z)*(x+y+z)+1;
m=s/w;
cout << m;
	
}