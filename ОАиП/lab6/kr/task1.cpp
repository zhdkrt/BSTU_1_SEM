#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double f, y, c, t, d;
	cout << "Введите число f: ";
	cin >> f;
	cout << "Введите число y: ";
	cin >> y;
	cout << "Введите число t: ";
	cin >> t;
	while (t < 10000) {
		c = 2 * sin(f / 2) + log(t);
		if (c >= 3)
			d = y * exp(-2 * t) + f;
		if (c < 3)
			d = y - pow(y, 3);
		cout << "При t=  " << t << endl;
		cout << "c=  " << c << endl;
		cout << "d=  " << d << endl;
		t = t + 1;
	}
}
