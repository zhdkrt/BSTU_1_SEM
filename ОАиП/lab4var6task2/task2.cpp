#include <iostream>
#include <stdio.h>
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
	double x1, y1, x2, y2, d;
	cout << "������� ���������� � ����� �1:";
	cin >> x1;
	cout << "������� ���������� y ����� �1:";
	cin >> y1;
	cout << "������� ���������� x ����� �2:";
	cin >> x2;
	cout << "������� ���������� y ����� �2:";
	cin >> y2;
	d = sqrt((pow((x2 - x1), 2) + pow(y2 - y1, 2)));
	printf("\n���������� ����� ������� �1 � �2 = %f \n" , d );
	_getch();
}