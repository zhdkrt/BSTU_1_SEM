#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "RU");
    int n;
    cout << "������� ���������� ��������� � ������������������: ";
    cin >> n;
    int sum = 0;
    int num;
    for (int i = 0; i < n; ++i) {
        cout << "������� ������� �" << (i + 1) << ": ";
        cin >> num;
        if (num % 2 == 0) 
            sum += num;
    }
    cout << "����� ������ ���������: " << sum << endl;
}