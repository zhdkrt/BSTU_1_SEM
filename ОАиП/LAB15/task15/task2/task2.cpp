#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	char* pStr;
	char c, * pc;
	int j, length, count = 0;
	
	cout << "������� ������ ������ ";
	cin >> length;

	pStr = new char[length + 1];
	
	cout << "������� ������ ";
	cin >> pStr;
	
	cout << "������� ������ ";
	cin >> c;

	pc = &c;
	
	for (j = 0; j < length; j++)
		if (pStr[j] == *pc)
			count++;

	cout << count << " ���������� ������ " << c << endl;
	
	delete[] pStr;

}