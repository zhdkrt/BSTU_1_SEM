#include <iostream>
#include <locale>
int main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int maxSize = 30;
	int n, i, kmin = 0;
	int a[maxSize];
	cout << "Введите размер массива(<30)" << endl;
	cin >> n;
	if (n > 30)
		return 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 1; i < n; i++) 
		if (a[i] < a[kmin])
			kmin = i;

	cout << "Минимальный элемент " << a[kmin] << endl;
}
