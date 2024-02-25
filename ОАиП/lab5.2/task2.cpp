#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float x, y, z, mn, mx;
	cout << "¬ведите x "; 
	cin >> x;
	cout << "¬ведите y "; 
	cin >> y;
	cout << "¬ведите z ";
	cin >> z;

	if ((x + y + z) < (x * y * z))
		mx = (x * y * z);
	else
		mx = (x + y + z);
	mn = x;
	if (mn > y) mn = y;
	if (mn > z) mn = z;
	float a = mn * mx;
	cout <<"–езультат: " <<  a << endl;
}
