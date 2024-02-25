#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "RU");
	double y[] = { 4,-6,3,-3,9,5 }; 
	double c = 10.1,sum=0, z;
	for (int i = 1; i < 7; i++) {
		sum += i++;
		if (sum <= c)
			z = pow(cos(c), 2);
		else
			z = pow(sin(c), 2);
	}
	cout << "z= " << z << endl;
}
