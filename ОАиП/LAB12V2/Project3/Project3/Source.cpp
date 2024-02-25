#include <iostream>

using namespace std;

int main() {
	int a[3][3] = 
	  { {0,0,0},
		{0,0,0},
		{0,0,0} };

	for (int i = 0; i < 3; i++) {
		if (i + 1 < 3)
		a[i][i+1] = 1;
		
		a[i][i] = 1;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}

	


}

