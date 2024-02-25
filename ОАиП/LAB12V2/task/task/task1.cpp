#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int num = 5;
	char symb, new_symbol = num + '0';
	symb = num + '0';
	cout << symb << ' ';
	
	if (symb >= '0' && symb <= '9')
		num = symb - '0';
	cout << num << ' ';
	symb = 'b';
	
	if (symb >= 'a' && symb <= 'z')
		new_symbol = symb - 'a' + 'A';
	cout << new_symbol << ' ';
}