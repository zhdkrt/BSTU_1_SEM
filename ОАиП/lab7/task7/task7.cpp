#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, x=0;
	cout << "¬ведите n: ";
	cin >> n;
	for (int i = 100; i < 1000; i++) {
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;
		int sum = a + b + c;
		if (sum == n)
			x++;
	}
	cout << x;
}