#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double w, s, y, t = -7.4, n = 9;
	for (int g = 0; g < 3; g++) {
		cout << "Введите y: ";
		cin >> y;
		for (double j=0.1; j < 0.5; j += 0.1) {
			w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
			s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
			cout << "При y= " << y << endl;
			cout << "При j= " << j << endl;
			cout << "w= " << w << endl;
			cout << "s= " << s << endl;
		}
	}
}