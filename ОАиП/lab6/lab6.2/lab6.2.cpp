#include <iostream>
using namespace std;
int main()
{
	float z, y, x = 3;
	while (x < 4.1)
	{
		z = 2 * pow(x, 2);
		y = z + pow(x, (float)1 / 3);
		cout << "x=" << x << "\t";
		cout << " y=" << y << endl;
		x = x + 0.1;
	}
}