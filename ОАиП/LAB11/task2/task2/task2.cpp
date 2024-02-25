#include <iostream>
 
using namespace std;

int main() {
	float a, * pa, s = 0;
	int i;
	
	pa = &a;
	
	for (i = 0; i <= 4; i++) {
		cout << "a= ";
		cin >> a;
		s += *pa;
	}
	
	cout << "s= " << s << endl;
}