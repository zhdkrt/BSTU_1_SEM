#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
	int a;
	puts("������! ����� ������ ������?\n1.��������\n2.�������\n3.��������\n4.������");
	printf("������� �����:");
	cin >> a;
	switch (a)
	{
	case 1: puts("��������! ���������� ������ ��� ��������."); break;
	case 2: puts("�������! ����� ���� ����� ������ �����."); break;
	case 3: puts("��������! ����� ����� � ����� ������."); break;
	case 4: puts("������! ����� ����� ��� ��������� ���������."); break;
	default: puts("������������ �����!"); break;
	}
}