#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double w, s, y = 5, t = -7.4, n = 9, j;
	for (int i = 0; i < 3; i++) {
		cout << "Введите j: ";
		cin >> j;
        w = 0.6 * j + exp(t * j) * pow(4*y / n, 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout << "При j= " << j << endl;
		cout << "w= " << w << endl;
		cout << "s= " << s << endl;
	}
}