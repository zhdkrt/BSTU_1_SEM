#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
    float a, b, c, mx;
	cout << "������� ����� �: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� ����� c: ";
	cin >> c;
	if (a > b && a > c)
		mx = a;
	else if (b > a && b > c)
		mx = b;
	if (c > a && c > b)
		mx = c;
	float d = mx;
	cout << "����� d: " << d << endl;
	
}