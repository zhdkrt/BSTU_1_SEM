#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int i, k, size = 4;
	float massivA[] = { 5,4,17.1,9,1 };
	cout << "������� ����� �������� (�� 0 �� 4)";
	cin >> k;
	
	for (i = k; i <= size; i++)
		massivA[i] = massivA[i + 1];
	size--;
	
	for (i = 0; i <= size; i++)
		cout << massivA[i] << endl;
}