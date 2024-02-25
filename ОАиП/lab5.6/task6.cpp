#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
	int a;
	puts("Привет! Какая сейчас погода?\n1.Солнечно\n2.Облачно\n3.Дождливо\n4.Снежно");
	printf("Введите номер:");
	cin >> a;
	switch (a)
	{
	case 1: puts("Солнечно! Прекрасная погода для прогулки."); break;
	case 2: puts("Облачно! Может быть скоро пойдет дождь."); break;
	case 3: puts("Дождливо! Лучше взять с собой зонтик."); break;
	case 4: puts("Снежно! Самое время для постройки снеговика."); break;
	default: puts("Некорректный выбор!"); break;
	}
}