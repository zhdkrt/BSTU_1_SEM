#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	const int SIZE_A = 13;
	int arrX[SIZE_A] = { 1,15,14,17,13,19,22,64,34,23,65,99,3 };
	const int SIZE_B = 7;
	int arrY[SIZE_B] = { 1,22,13,14,32,15,55 };
	int* px = arrX;
	int* py = arrY;
	int count = 0;

	for (int i = 0;i < SIZE_A; i++){
		for (int n = 0;n < SIZE_B;n++){
			if (*(px + i) == *(py + n)) {
				count++;
				break;
			}
		}
	}

	cout << "Количество совпадений: " << count << endl;
}