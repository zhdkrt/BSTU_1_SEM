#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	const int ARR_SIZE=100;
	int size, rmn = 0, rmx = 99;
	double a[ARR_SIZE];
	
	cout << "Введите размер массива: ";
	cin >> size;
	
	srand((unsigned)time(NULL));
	cout << "Массив А: " << endl;

	for (int i = 0; i <= size; i++) {
		a[i] = (int(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn));
	}

	for (int i = 1; i <= size; i++) {
		if (i % 3 == 0)
			a[i] = (a[i - 1] + a[i + 1]) / 2;
		else
			a[i] == a[i];
	
		cout << a[i] << endl;
	}
}