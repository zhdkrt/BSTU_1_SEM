#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	const int SIZE = 10;
	int a[SIZE] = { 1,19,5,15,9,11,13,7,17,3 };
	int* pa1 = a;
	int sumElement = 0, arithmeticMean;


	for (int i = 0; i < 10;i++) {
		sumElement += *(pa1 + i);
	}
	arithmeticMean = sumElement / SIZE;

	for (int i = 0;i < 10;i++) {
		if (*(pa1 + i) > arithmeticMean)
			continue;

		for (int n = i; n < 10;n++) {
			if (a[n] > arithmeticMean) {
				swap(*(pa1 + n), *(pa1 + i));
			}

		}
	}

	for (int i = 0;i < 10;i++) {
		cout << *(pa1 + i) << " ";
	}
}
