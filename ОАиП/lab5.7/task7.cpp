#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
	int a, b, c;
	cout << "������� �:";
		cin >> a;
	cout << "������� b:";
		cin >> b;
	cout << "������� c:";
		cin >> c;
		int d = ((a % 5 == 0) ? a : 0) + ((b % 5 == 0) ? b : 0) + ((c % 5 == 0) ? c : 0);
		d == 0 ? cout << "Error!\n" : cout << "����� �����:" << d << endl;

}