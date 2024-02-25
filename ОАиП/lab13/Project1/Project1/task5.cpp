#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	const int n = 5;
	const int m = 4;
	int sum = 0;

	int mass[5][4]{ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20} };

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			sum += mass[i][j];
		}
	}
	if (sum % 2 == 0)
		cout << "Сумма является чётным числом";
	else
		cout << "Сумма является нечётным числом";
}
