#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "RU");
	float com = 1; int i;
	const int size = 5;
	for (i = 1; i <= size; i++)
	{
		com *= i;
	}
	cout << "5!= " << com << endl;	
}