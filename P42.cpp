#include <iostream>

using namespace std;

main() {
	
int x,y,z;
float w;
	
cin >> x >> y >> z;
w=(float)((x-y)*(x+z))/((x+y+z)*(x+y+z)+1);
cout << w;

}
