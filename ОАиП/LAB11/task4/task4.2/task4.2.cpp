#include <iostream>

using namespace std;

int main() {
	int val = 1;
	cout << "value= " << val;
	
	int& rv = val;
	rv = 5;
	int* pval = &rv;
	
	cout << "\nvalue= " << *pval;
} 