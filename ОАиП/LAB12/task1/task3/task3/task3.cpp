#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");

	int A; char tmp[33];
	
	cout << "������� �����" << endl;
	cin >> A;
	
	_itoa_s(A, tmp, 2);
	cout << "����� � �������� ���� = " << tmp << endl;
	
	if ((A & 7) == 0)
		cout << "����� ������ 8" << endl;
	else
		cout << "����� �� ������ 8" << endl;
}