#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	
	int A,B;
	int A_mask = 31;

	cout << "������� A: ";
	cin >> A;
	
	cout << "������� B: ";
	cin >> B;

	A = ((A >> 1) & A_mask) << 3;
	B = (B & ~(A_mask << 3)) | A;

	cout << "B = " << B << endl;
}
