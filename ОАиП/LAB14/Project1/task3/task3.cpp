#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");

	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row = 0, column = 0;

	cout << "Введите элементы массива" << endl;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];

	cout << " Исходный массив:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << setw(4) << B[i][j] << " ";
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int* minPtr = &B[i][0];
		for (int j = 1; j < m; j++)
		{
			if (B[i][j] < *minPtr)
				minPtr = &B[i][j];
		}
		cout << "Минимальный элемент в строке " << i+1 << " : " << *minPtr << endl;
	}
}
