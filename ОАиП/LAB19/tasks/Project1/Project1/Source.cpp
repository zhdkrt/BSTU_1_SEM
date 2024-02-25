#include <iostream>

using namespace std;

void sum(float a, float b, float c, float d, float f, float& summa);

int main() {
	setlocale(LC_ALL, "RU");

	float a, b, c, d, f, summa;
	cout << "¬ведите числа a,b,c,d,f: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> f;
	

	 sum(a,b,c,d,f,summa);
	 cout << summa;
	
	
}

void sum(float a, float b, float c, float d, float f, float& summa) {
	summa = 0;
	summa = a + b + c + d + f;
}