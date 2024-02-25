#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	const int SIZE = 10;
	int a[SIZE] = { 1,19,5,15,9,11,13,7,17,3 };
	int b[SIZE / 2];
	int c[SIZE / 2];
	int* pa1 = a;
	int sumElement = 0, arithmeticMean;
	
	for (int i = 0; i < 10;i++) {
		sumElement += *(pa1 + i);
	}
	arithmeticMean = sumElement / SIZE;

	int numElement1 = 0;
	int numElement2 = 0;

	for (int i = 0;i < 10;i++) {
		
		if (*(pa1 + i) > arithmeticMean) {
			b[numElement1++] = a[i];
		}
		else
			c[numElement2++] = a[i];
	}
	
	for (int i = 0;i < 5;i++)
		cout << b[i] << " ";
	
	for (int i = 0;i < 5;i++)
		cout << c[i] << " ";
}