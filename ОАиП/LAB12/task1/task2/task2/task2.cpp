#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int A = 150; char tmp[33];
	
	_itoa_s(A, tmp, 2);
	cout << " ����� �: " << tmp << endl;
	
	_itoa_s(0x24, tmp, 2);
	cout << " ����� ��� �: " << tmp << endl;
	
	_itoa_s(A | 0x24, tmp, 2);
	cout << " ���������: " << tmp << endl << endl;
}