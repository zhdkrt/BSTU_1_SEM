#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	const int SIZE = 10;
	int arrA[SIZE] = { 2,4,6,8,10,12,14,16,18,20 };
	int arrB[SIZE] = { 1,3,5,7,9,11,13,15,17,19 };
	int arrC[SIZE];
	int* pa = arrA, * pb = arrB, * pc = arrC;
	
	for (int i = 0;i < SIZE;i++)
		*(arrC + i) = *(arrA + i) + *(arrB + i);
	

	cout << "Массив С:";
	
	for (int i = 0;i < SIZE;i++)
		cout << " " << *(arrC + i);
}