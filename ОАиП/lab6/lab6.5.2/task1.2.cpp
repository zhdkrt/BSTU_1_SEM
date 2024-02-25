#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double w, s, y = 5, t = -7.4, n = 9, j = 0;
	while (j < 2.1) {
		w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout << "При j= " << j << endl;
		cout << "w= " << w << endl;
		cout << "s= " << s << endl;
		j = j + 0.1;
	}
}

