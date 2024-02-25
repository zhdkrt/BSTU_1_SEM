#include <iostream>

using namespace std;

int massiv(int* M, int);

void matrix();

int main() {
	setlocale(LC_ALL, "RU");
	
	int choice;
	
	do {
		cout << "�������� ������� ������" << endl;
		cout << "1 - � ���������� ��������" << endl;
		cout << "2 - � ��������" << endl;
		cout << "3 - �����" << endl;
		cin >> choice;
		
		switch (choice)
		{
		case 1: int* M, size, i, av;
			
			cout << "������� ������ ������� ";
			cin >> size;
	
			M = new int[size];
			
			for (i = 0; i < size; i++)
			{
				cout << "������� " << i + 1 << " ����� ";
				cin >> *(M + i);
			}
			
			av = massiv(M, size);
			cout << "���������= " << av << endl;
			
			delete[] M;
			break;
			
		case 2: matrix();
			break;

		case 3:
			break;
		}
	} while (choice != 3);
}

int massiv(int* M, int size) {
	int sum = 0, avar;
	
	for (int i = 0;i < size;i++)
		sum += *(M + i);
	
	avar = sum / size;
	return avar;
}

void matrix() {
	int** A, row, col, i, j, m;

	cout << "������� ����� ����� �������� ";
	cin >> row;

	cout << "������� ����� �������� ������� ";
	cin >> col;

	A = new int* [row];

	for (int i = 0; i < row; i++)
		A[i] = new int[col];

	for (i = 0;i < row;i++)
		for (j = 0;j < col;j++) {
			cout << "������� A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j);
		}
	
	m = A[0][0];

	for (i = 0;i < row;  i++)
		for (j = 0;j < col;j++)
			if (*(*(A + i) + j) < m)
				m = *(*(A + i) + j);
	
	cout << "���������= " << m << endl;
	
	for (i = 0;i < row;i++)
		delete	A[i];
	delete[] A;
}
