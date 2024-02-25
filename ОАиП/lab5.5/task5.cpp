#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
    float a, b, c, mx;
	cout << "Введите число а: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;
	if (a > b && a > c)
		mx = a;
	else if (b > a && b > c)
		mx = b;
	if (c > a && c > b)
		mx = c;
	float d = mx;
	cout << "Вывод d: " << d << endl;
	
}