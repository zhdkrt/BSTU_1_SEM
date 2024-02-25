#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	
	int n, k;
	string str;
	string s1;
	
	cout << "¬ведите строку: ";
	getline(cin, str);

	cout << "¬ведите длинну: ";
	cin >> k;

	cout << "¬ведите номер начальной позиции:";
	cin >> n;
	
	for (int i = n; i < n+k; i++){
		s1 += str[i];
	}
	cout << s1;

}
