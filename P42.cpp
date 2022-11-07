#include <iostream>

using namespace std;

main() {
	
int x,y,z;
float s;
	
cin >> x >> y >> z;
s=(float)((x-y)*(x+z))/((x+y+z)*(x+y+z)+1);
cout << s;

}
