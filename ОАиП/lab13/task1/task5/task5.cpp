#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int A, p, n;

    cout << "������� ����� A: ";
    cin >> A;

    cout << "������� ���������� ��� n: ";
    cin >> n;

    cout << "������� ������� p: ";
    cin >> p;

    cout << "�������� ����� A: " << A << endl;

    unsigned int mask = (1u << n) - 1;

    mask = mask << p;

    A = A | mask;

    cout << "����� A ����� ��������� �����: " << A << endl;
}
