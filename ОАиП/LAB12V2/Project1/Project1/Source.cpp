#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int a = 5;
	int* pa;
	pa = &a;

	cout << *pa;


}