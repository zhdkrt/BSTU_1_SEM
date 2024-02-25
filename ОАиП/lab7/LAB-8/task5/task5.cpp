#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	double x[] = { 9,1.7,4,6,3 };
	double m, max=x[0], y, sum=0;
	for (int i = 0; i < 5; i++) {
		if (max < x[i])
			max = x[i];
	}
	m = 1 + max;
	for (int i = 0; i <5; i++) {
		sum = sum + pow(x[i], 2) + m;
	}
	cout << "y= " << sum << endl;
}