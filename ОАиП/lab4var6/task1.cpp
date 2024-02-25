#include <iostream>
#include <iomanip>
int main() {
	setlocale(LC_ALL, "RU");
	using namespace std;
	char a, probel;
	probel = ' ';
	cout << "Введите символ:";
	cin >> a;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(a) << a << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(26) << setfill(probel) << probel;
	cout << setw(19) << setfill(a) << a << endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(15) << setfill(a) << a << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(11) << setfill(a) << a << endl;
	cout << setw(29) << setfill(probel) << probel << setw(6) << setfill(a) << a << setw(1) << setfill(probel) << probel << setw(6) << setfill(a) << a << endl;
	cout << setw(28) << setfill(probel) << probel << setw(5) << setfill(a) << a << setw(5) << setfill(probel) << probel << setw(5) << setfill(a) << a << endl;
	cout << setw(27) << setfill(probel) << probel << setw(2) << setfill(a) << a << setw(13) << setfill(probel) << probel << setw(2) << setfill(a) << a << endl;
}