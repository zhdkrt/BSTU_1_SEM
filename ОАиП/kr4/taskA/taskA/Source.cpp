#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	const int size = 100;
	char str[size];
	
	cout << "Введите предложение: ";
	cin.getline(str, size);

	for (int i = 0;i < size;i++) {
		if (str[i] == '.')
			str[i] = ',';
	}
	cout << str << endl;
}