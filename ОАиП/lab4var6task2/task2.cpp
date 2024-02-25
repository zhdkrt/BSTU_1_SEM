#include <iostream>
#include <stdio.h>
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
	double x1, y1, x2, y2, d;
	cout << "Введите координату х точки М1:";
	cin >> x1;
	cout << "Введите координату y точки М1:";
	cin >> y1;
	cout << "Введите координату x точки М2:";
	cin >> x2;
	cout << "Введите координату y точки М2:";
	cin >> y2;
	d = sqrt((pow((x2 - x1), 2) + pow(y2 - y1, 2)));
	printf("\nРасстояние между точками М1 и М2 = %f \n" , d );
	_getch();
}