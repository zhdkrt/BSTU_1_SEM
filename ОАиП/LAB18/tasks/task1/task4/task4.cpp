#include <iostream>

using namespace std;

bool is_elem(int* pA, int n, int iV);

void main()
{
	setlocale(LC_CTYPE, "Rus");
	bool t; int k;
	int A[] = { 5, 4, 3, 2, 11 };
	cout << "������� ����� ";
	cin >> k;
	t = is_elem(A, sizeof(A) / sizeof(int), k);
	if (t == true)
		cout << "����� ���� � ������� ";
	else
		cout << "����� ��� � ������� ";
}

bool is_elem(int* pA, int n, int iV)
{
	bool bf = false;
	for (int i = 0; i < n; i++)
		if (pA[i] == iV)
		{
			bf = true;
			break;
		}
	return bf;
}