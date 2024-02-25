#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const int n = 3;
	const int m = 4;
	int mass[n][m] = { {1,2,3,4}
	                  ,{4,6,3,8},
		               {8,7,6,5} };
	int k, f;
	
	cout << "¬ведите номер строки: ";
	cin >> k;
	k = k - 1;

	for (int i = 0;i < m;i++) {
		if (mass[k][i] > mass[k][i + 1])
			f = 0;
		else
			f = 1;
	}
	cout << f;
}